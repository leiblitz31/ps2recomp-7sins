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

// Function: sub_00310A90
// Address: 0x310a90 - 0x310b48
void sub_00310A90_0x310a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310A90_0x310a90");
#endif

    switch (ctx->pc) {
        case 0x310aa0u: goto label_310aa0;
        case 0x310ab8u: goto label_310ab8;
        case 0x310ae0u: goto label_310ae0;
        case 0x310af0u: goto label_310af0;
        case 0x310b08u: goto label_310b08;
        case 0x310b30u: goto label_310b30;
        default: break;
    }

    ctx->pc = 0x310a90u;

    // 0x310a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310a98: 0xc0c4254  jal         func_310950
    ctx->pc = 0x310A98u;
    SET_GPR_U32(ctx, 31, 0x310AA0u);
    ctx->pc = 0x310950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310950u, 0x310A98u, 0x310AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310AA0u;
label_310aa0:
    // 0x310aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310AA0u;
    {
        const bool branch_taken_0x310aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AA0u;
        // 0x310aa4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310aa0) {
            ctx->pc = 0x310AB0u;
            goto label_310ab0;
        }
    }
    ctx->pc = 0x310AA8u;
    // 0x310aa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x310AA8u;
    {
        const bool branch_taken_0x310aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AA8u;
        // 0x310aac: 0x844222b0  lh          $v0, 0x22B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310aa8) {
            ctx->pc = 0x310AD0u;
            goto label_310ad0;
        }
    }
    ctx->pc = 0x310AB0u;
label_310ab0:
    // 0x310ab0: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310AB0u;
    SET_GPR_U32(ctx, 31, 0x310AB8u);
    ctx->pc = 0x310AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310AB0u;
    // 0x310ab4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310AB0u, 0x310AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310AB8u;
label_310ab8:
    // 0x310ab8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310abc: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x310abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x310ac0: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x310ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x310ac4: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x310ac8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x310ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x310acc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x310accu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_310ad0:
    // 0x310ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x310AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AD4u;
        // 0x310ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310ADCu;
    // 0x310adc: 0x0  nop
    ctx->pc = 0x310adcu;
    // NOP
label_310ae0:
    // 0x310ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310ae8: 0xc0c4254  jal         func_310950
    ctx->pc = 0x310AE8u;
    SET_GPR_U32(ctx, 31, 0x310AF0u);
    ctx->pc = 0x310950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310950u, 0x310AE8u, 0x310AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310AF0u;
label_310af0:
    // 0x310af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310AF0u;
    {
        const bool branch_taken_0x310af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AF0u;
        // 0x310af4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310af0) {
            ctx->pc = 0x310B00u;
            goto label_310b00;
        }
    }
    ctx->pc = 0x310AF8u;
    // 0x310af8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x310AF8u;
    {
        const bool branch_taken_0x310af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AF8u;
        // 0x310afc: 0x904222b3  lbu         $v0, 0x22B3($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8883)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310af8) {
            ctx->pc = 0x310B38u;
            goto label_310b38;
        }
    }
    ctx->pc = 0x310B00u;
label_310b00:
    // 0x310b00: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310B00u;
    SET_GPR_U32(ctx, 31, 0x310B08u);
    ctx->pc = 0x310B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B00u;
    // 0x310b04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310B00u, 0x310B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B08u;
label_310b08:
    // 0x310b08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310b0c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x310b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x310b10: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x310b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x310b14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310B14u;
    {
        const bool branch_taken_0x310b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B14u;
        // 0x310b18: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b14) {
            ctx->pc = 0x310B24u;
            goto label_310b24;
        }
    }
    ctx->pc = 0x310B1Cu;
    // 0x310b1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x310B1Cu;
    {
        const bool branch_taken_0x310b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B1Cu;
        // 0x310b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b1c) {
            ctx->pc = 0x310B38u;
            goto label_310b38;
        }
    }
    ctx->pc = 0x310B24u;
label_310b24:
    // 0x310b24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310b28: 0xc0bf79c  jal         func_2FDE70
    ctx->pc = 0x310B28u;
    SET_GPR_U32(ctx, 31, 0x310B30u);
    ctx->pc = 0x310B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B28u;
    // 0x310b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE70u, 0x310B28u, 0x310B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B30u;
label_310b30:
    // 0x310b30: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x310b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x310b34: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x310b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_310b38:
    // 0x310b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x310B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B3Cu;
        // 0x310b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310B44u;
    // 0x310b44: 0x0  nop
    ctx->pc = 0x310b44u;
    // NOP
    ctx->pc = 0x310b48u;
}
