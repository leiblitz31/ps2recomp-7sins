#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9AD0
// Address: 0x3b9ad0 - 0x3b9b60
void sub_003B9AD0_0x3b9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9AD0_0x3b9ad0");
#endif

    switch (ctx->pc) {
        case 0x3b9ad0u: goto label_3b9ad0;
        case 0x3b9ad4u: goto label_3b9ad4;
        case 0x3b9ad8u: goto label_3b9ad8;
        case 0x3b9adcu: goto label_3b9adc;
        case 0x3b9ae0u: goto label_3b9ae0;
        case 0x3b9ae4u: goto label_3b9ae4;
        case 0x3b9ae8u: goto label_3b9ae8;
        case 0x3b9aecu: goto label_3b9aec;
        case 0x3b9af0u: goto label_3b9af0;
        case 0x3b9af4u: goto label_3b9af4;
        case 0x3b9af8u: goto label_3b9af8;
        case 0x3b9afcu: goto label_3b9afc;
        case 0x3b9b00u: goto label_3b9b00;
        case 0x3b9b04u: goto label_3b9b04;
        case 0x3b9b08u: goto label_3b9b08;
        case 0x3b9b0cu: goto label_3b9b0c;
        case 0x3b9b10u: goto label_3b9b10;
        case 0x3b9b14u: goto label_3b9b14;
        case 0x3b9b18u: goto label_3b9b18;
        case 0x3b9b1cu: goto label_3b9b1c;
        case 0x3b9b20u: goto label_3b9b20;
        case 0x3b9b24u: goto label_3b9b24;
        case 0x3b9b28u: goto label_3b9b28;
        case 0x3b9b2cu: goto label_3b9b2c;
        case 0x3b9b30u: goto label_3b9b30;
        case 0x3b9b34u: goto label_3b9b34;
        case 0x3b9b38u: goto label_3b9b38;
        case 0x3b9b3cu: goto label_3b9b3c;
        case 0x3b9b40u: goto label_3b9b40;
        case 0x3b9b44u: goto label_3b9b44;
        case 0x3b9b48u: goto label_3b9b48;
        case 0x3b9b4cu: goto label_3b9b4c;
        case 0x3b9b50u: goto label_3b9b50;
        case 0x3b9b54u: goto label_3b9b54;
        case 0x3b9b58u: goto label_3b9b58;
        case 0x3b9b5cu: goto label_3b9b5c;
        default: break;
    }

    ctx->pc = 0x3b9ad0u;

label_3b9ad0:
    // 0x3b9ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b9ad4:
    // 0x3b9ad4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3b9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3b9ad8:
    // 0x3b9ad8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3b9ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3b9adc:
    // 0x3b9adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9ae0:
    // 0x3b9ae0: 0x24a5c148  addiu       $a1, $a1, -0x3EB8
    ctx->pc = 0x3b9ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951240));
label_3b9ae4:
    // 0x3b9ae4: 0xc0ee26a  jal         func_3B89A8
label_3b9ae8:
    if (ctx->pc == 0x3B9AE8u) {
        ctx->pc = 0x3B9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AE4u;
        // 0x3b9ae8: 0x24c6c158  addiu       $a2, $a2, -0x3EA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9AECu;
        goto label_3b9aec;
    }
    ctx->pc = 0x3B9AE4u;
    SET_GPR_U32(ctx, 31, 0x3B9AECu);
    ctx->pc = 0x3B9AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9AE4u;
    // 0x3b9ae8: 0x24c6c158  addiu       $a2, $a2, -0x3EA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B89A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B89A8u, 0x3B9AE4u, 0x3B9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9AECu;
label_3b9aec:
    // 0x3b9aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9af0:
    // 0x3b9af0: 0x3e00008  jr          $ra
label_3b9af4:
    if (ctx->pc == 0x3B9AF4u) {
        ctx->pc = 0x3B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AF0u;
        // 0x3b9af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9AF8u;
        goto label_3b9af8;
    }
    ctx->pc = 0x3B9AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AF0u;
        // 0x3b9af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9AF8u;
label_3b9af8:
    // 0x3b9af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b9afc:
    // 0x3b9afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9b00:
    // 0x3b9b00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b9b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b9b04:
    // 0x3b9b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9b08:
    // 0x3b9b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b9b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9b0c:
    // 0x3b9b0c: 0xc0e2686  jal         func_389A18
label_3b9b10:
    if (ctx->pc == 0x3B9B10u) {
        ctx->pc = 0x3B9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B0Cu;
        // 0x3b9b10: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B14u;
        goto label_3b9b14;
    }
    ctx->pc = 0x3B9B0Cu;
    SET_GPR_U32(ctx, 31, 0x3B9B14u);
    ctx->pc = 0x3B9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B0Cu;
    // 0x3b9b10: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x3B9B0Cu, 0x3B9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B14u;
label_3b9b14:
    // 0x3b9b14: 0xc0e27ae  jal         func_389EB8
label_3b9b18:
    if (ctx->pc == 0x3B9B18u) {
        ctx->pc = 0x3B9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B14u;
        // 0x3b9b18: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B1Cu;
        goto label_3b9b1c;
    }
    ctx->pc = 0x3B9B14u;
    SET_GPR_U32(ctx, 31, 0x3B9B1Cu);
    ctx->pc = 0x3B9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B14u;
    // 0x3b9b18: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x3B9B14u, 0x3B9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B1Cu;
label_3b9b1c:
    // 0x3b9b1c: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x3b9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3b9b20:
    // 0x3b9b20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b9b24:
    if (ctx->pc == 0x3B9B24u) {
        ctx->pc = 0x3B9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B20u;
        // 0x3b9b24: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B28u;
        goto label_3b9b28;
    }
    ctx->pc = 0x3B9B20u;
    {
        const bool branch_taken_0x3b9b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B20u;
        // 0x3b9b24: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9b20) {
            ctx->pc = 0x3B9B3Cu;
            goto label_3b9b3c;
        }
    }
    ctx->pc = 0x3B9B28u;
label_3b9b28:
    // 0x3b9b28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b9b2c:
    // 0x3b9b2c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3b9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3b9b30:
    // 0x3b9b30: 0x40f809  jalr        $v0
label_3b9b34:
    if (ctx->pc == 0x3B9B34u) {
        ctx->pc = 0x3B9B38u;
        goto label_3b9b38;
    }
    ctx->pc = 0x3B9B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B9B38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9B30u, 0x3B9B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9B38u;
label_3b9b38:
    // 0x3b9b38: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3b9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3b9b3c:
    // 0x3b9b3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b9b40:
    // 0x3b9b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b9b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9b44:
    // 0x3b9b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9b48:
    // 0x3b9b48: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b9b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3b9b4c:
    // 0x3b9b4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b9b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3b9b50:
    // 0x3b9b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b9b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9b54:
    // 0x3b9b54: 0x3e00008  jr          $ra
label_3b9b58:
    if (ctx->pc == 0x3B9B58u) {
        ctx->pc = 0x3B9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B54u;
        // 0x3b9b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B5Cu;
        goto label_3b9b5c;
    }
    ctx->pc = 0x3B9B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B54u;
        // 0x3b9b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9B5Cu;
label_3b9b5c:
    // 0x3b9b5c: 0x0  nop
    ctx->pc = 0x3b9b5cu;
    // NOP
    ctx->pc = 0x3b9b60u;
}
