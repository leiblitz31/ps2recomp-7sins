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

// Function: sub_00379AF0
// Address: 0x379af0 - 0x379b60
void sub_00379AF0_0x379af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379AF0_0x379af0");
#endif

    switch (ctx->pc) {
        case 0x379af0u: goto label_379af0;
        case 0x379af4u: goto label_379af4;
        case 0x379af8u: goto label_379af8;
        case 0x379afcu: goto label_379afc;
        case 0x379b00u: goto label_379b00;
        case 0x379b04u: goto label_379b04;
        case 0x379b08u: goto label_379b08;
        case 0x379b0cu: goto label_379b0c;
        case 0x379b10u: goto label_379b10;
        case 0x379b14u: goto label_379b14;
        case 0x379b18u: goto label_379b18;
        case 0x379b1cu: goto label_379b1c;
        case 0x379b20u: goto label_379b20;
        case 0x379b24u: goto label_379b24;
        case 0x379b28u: goto label_379b28;
        case 0x379b2cu: goto label_379b2c;
        case 0x379b30u: goto label_379b30;
        case 0x379b34u: goto label_379b34;
        case 0x379b38u: goto label_379b38;
        case 0x379b3cu: goto label_379b3c;
        case 0x379b40u: goto label_379b40;
        case 0x379b44u: goto label_379b44;
        case 0x379b48u: goto label_379b48;
        case 0x379b4cu: goto label_379b4c;
        case 0x379b50u: goto label_379b50;
        case 0x379b54u: goto label_379b54;
        case 0x379b58u: goto label_379b58;
        case 0x379b5cu: goto label_379b5c;
        default: break;
    }

    ctx->pc = 0x379af0u;

label_379af0:
    // 0x379af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_379af4:
    // 0x379af4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x379af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_379af8:
    // 0x379af8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x379af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_379afc:
    // 0x379afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_379b00:
    // 0x379b00: 0x2470ac48  addiu       $s0, $v1, -0x53B8
    ctx->pc = 0x379b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945864));
label_379b04:
    // 0x379b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_379b08:
    // 0x379b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x379b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_379b0c:
    // 0x379b0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x379b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_379b10:
    // 0x379b10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x379b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_379b14:
    // 0x379b14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_379b18:
    if (ctx->pc == 0x379B18u) {
        ctx->pc = 0x379B1Cu;
        goto label_379b1c;
    }
    ctx->pc = 0x379B14u;
    {
        const bool branch_taken_0x379b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379b14) {
            ctx->pc = 0x379B44u;
            goto label_379b44;
        }
    }
    ctx->pc = 0x379B1Cu;
label_379b1c:
    // 0x379b1c: 0xc0de91e  jal         func_37A478
label_379b20:
    if (ctx->pc == 0x379B20u) {
        ctx->pc = 0x379B24u;
        goto label_379b24;
    }
    ctx->pc = 0x379B1Cu;
    SET_GPR_U32(ctx, 31, 0x379B24u);
    ctx->pc = 0x37A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A478u, 0x379B1Cu, 0x379B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B24u;
label_379b24:
    // 0x379b24: 0xc104284  jal         func_410A10
label_379b28:
    if (ctx->pc == 0x379B28u) {
        ctx->pc = 0x379B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B24u;
        // 0x379b28: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B2Cu;
        goto label_379b2c;
    }
    ctx->pc = 0x379B24u;
    SET_GPR_U32(ctx, 31, 0x379B2Cu);
    ctx->pc = 0x379B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B24u;
    // 0x379b28: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x379B24u, 0x379B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B2Cu;
label_379b2c:
    // 0x379b2c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x379b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_379b30:
    // 0x379b30: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x379b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_379b34:
    // 0x379b34: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x379b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_379b38:
    // 0x379b38: 0x40f809  jalr        $v0
label_379b3c:
    if (ctx->pc == 0x379B3Cu) {
        ctx->pc = 0x379B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B38u;
        // 0x379b3c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B40u;
        goto label_379b40;
    }
    ctx->pc = 0x379B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379B40u);
        ctx->pc = 0x379B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B38u;
        // 0x379b3c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B38u, 0x379B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379B40u;
label_379b40:
    // 0x379b40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x379b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_379b44:
    // 0x379b44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x379b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379b48:
    // 0x379b48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x379b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_379b4c:
    // 0x379b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379b50:
    // 0x379b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_379b54:
    // 0x379b54: 0x3e00008  jr          $ra
label_379b58:
    if (ctx->pc == 0x379B58u) {
        ctx->pc = 0x379B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B54u;
        // 0x379b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B5Cu;
        goto label_379b5c;
    }
    ctx->pc = 0x379B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B54u;
        // 0x379b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379B5Cu;
label_379b5c:
    // 0x379b5c: 0x0  nop
    ctx->pc = 0x379b5cu;
    // NOP
    ctx->pc = 0x379b60u;
}
