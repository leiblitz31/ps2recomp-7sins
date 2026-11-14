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

// Function: sub_0020AEF0
// Address: 0x20aef0 - 0x20b000
void sub_0020AEF0_0x20aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AEF0_0x20aef0");
#endif

    switch (ctx->pc) {
        case 0x20af24u: goto label_20af24;
        case 0x20af38u: goto label_20af38;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af78u: goto label_20af78;
        case 0x20af90u: goto label_20af90;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afe4u: goto label_20afe4;
        default: break;
    }

    ctx->pc = 0x20aef0u;

    // 0x20aef0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20aef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20aef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20aefc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20af00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20af04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x20af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x20af08: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x20af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x20af0c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x20af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x20af10: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x20af10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x20af14: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x20af14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x20af18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20af1c: 0xc082c50  jal         func_20B140
    ctx->pc = 0x20AF1Cu;
    SET_GPR_U32(ctx, 31, 0x20AF24u);
    ctx->pc = 0x20B140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B140u, 0x20AF1Cu, 0x20AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF24u;
label_20af24:
    // 0x20af24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x20af24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x20af28: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x20af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x20af2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x20af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20af30: 0xc041954  jal         func_106550
    ctx->pc = 0x20AF30u;
    SET_GPR_U32(ctx, 31, 0x20AF38u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x20AF30u, 0x20AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF38u;
label_20af38:
    // 0x20af38: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20af3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20af40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20af44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20af48: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20af4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20af50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af54: 0xc083fc8  jal         func_20FF20
    ctx->pc = 0x20AF54u;
    SET_GPR_U32(ctx, 31, 0x20AF5Cu);
    ctx->pc = 0x20FF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FF20u, 0x20AF54u, 0x20AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF5Cu;
label_20af5c:
    // 0x20af5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20af5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20af64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20af68: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20af6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20af6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af70: 0xc041934  jal         func_1064D0
    ctx->pc = 0x20AF70u;
    SET_GPR_U32(ctx, 31, 0x20AF78u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x20AF70u, 0x20AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF78u;
label_20af78:
    // 0x20af78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20af78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20af7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af80: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20af84: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x20af84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20af88: 0xc082c34  jal         func_20B0D0
    ctx->pc = 0x20AF88u;
    SET_GPR_U32(ctx, 31, 0x20AF90u);
    ctx->pc = 0x20B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0D0u, 0x20AF88u, 0x20AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF90u;
label_20af90:
    // 0x20af90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20af90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af94: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x20af94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20af98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AF98u;
    {
        const bool branch_taken_0x20af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af98) {
            ctx->pc = 0x20AFBCu;
            goto label_20afbc;
        }
    }
    ctx->pc = 0x20AFA0u;
    // 0x20afa0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20afa4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20afa8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20afac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20afacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20afb0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x20AFB0u;
    SET_GPR_U32(ctx, 31, 0x20AFB8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x20AFB0u, 0x20AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFB8u;
label_20afb8:
    // 0x20afb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20afb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20afbc:
    // 0x20afbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20afc0: 0xc082c14  jal         func_20B050
    ctx->pc = 0x20AFC0u;
    SET_GPR_U32(ctx, 31, 0x20AFC8u);
    ctx->pc = 0x20B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B050u, 0x20AFC0u, 0x20AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFC8u;
label_20afc8:
    // 0x20afc8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20afcc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20afd0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20afd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20afd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20afd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20afd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20afdc: 0xc082c00  jal         func_20B000
    ctx->pc = 0x20AFDCu;
    SET_GPR_U32(ctx, 31, 0x20AFE4u);
    ctx->pc = 0x20B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B000u, 0x20AFDCu, 0x20AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFE4u;
label_20afe4:
    // 0x20afe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20afe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20afe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20afe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20afec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20afecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20aff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aff4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x20aff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20aff8: 0x3e00008  jr          $ra
    ctx->pc = 0x20AFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B000u;
}
