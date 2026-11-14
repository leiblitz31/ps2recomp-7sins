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

// Function: sub_0020DE80
// Address: 0x20de80 - 0x20df90
void sub_0020DE80_0x20de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DE80_0x20de80");
#endif

    switch (ctx->pc) {
        case 0x20deb4u: goto label_20deb4;
        case 0x20dec8u: goto label_20dec8;
        case 0x20deecu: goto label_20deec;
        case 0x20df08u: goto label_20df08;
        case 0x20df20u: goto label_20df20;
        case 0x20df48u: goto label_20df48;
        case 0x20df58u: goto label_20df58;
        case 0x20df74u: goto label_20df74;
        default: break;
    }

    ctx->pc = 0x20de80u;

    // 0x20de80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20de84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20de88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20de8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20de90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20de94: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x20de94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x20de98: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x20de98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x20de9c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x20de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x20dea0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x20dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x20dea4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x20dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x20dea8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20deac: 0xc083834  jal         func_20E0D0
    ctx->pc = 0x20DEACu;
    SET_GPR_U32(ctx, 31, 0x20DEB4u);
    ctx->pc = 0x20E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E0D0u, 0x20DEACu, 0x20DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEB4u;
label_20deb4:
    // 0x20deb4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x20deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x20deb8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x20deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x20debc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x20debcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20dec0: 0xc041954  jal         func_106550
    ctx->pc = 0x20DEC0u;
    SET_GPR_U32(ctx, 31, 0x20DEC8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x20DEC0u, 0x20DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEC8u;
label_20dec8:
    // 0x20dec8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20decc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ded0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x20ded0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ded4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ded8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x20ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20dedc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20dedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20dee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dee4: 0xc084004  jal         func_210010
    ctx->pc = 0x20DEE4u;
    SET_GPR_U32(ctx, 31, 0x20DEECu);
    ctx->pc = 0x210010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210010u, 0x20DEE4u, 0x20DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEECu;
label_20deec:
    // 0x20deec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20deecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20def0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20def4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20def8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x20def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20defc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20defcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df00: 0xc041934  jal         func_1064D0
    ctx->pc = 0x20DF00u;
    SET_GPR_U32(ctx, 31, 0x20DF08u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x20DF00u, 0x20DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF08u;
label_20df08:
    // 0x20df08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20df08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df10: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x20df10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20df14: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x20df14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20df18: 0xc083818  jal         func_20E060
    ctx->pc = 0x20DF18u;
    SET_GPR_U32(ctx, 31, 0x20DF20u);
    ctx->pc = 0x20E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E060u, 0x20DF18u, 0x20DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF20u;
label_20df20:
    // 0x20df20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20df20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df24: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x20df24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20df28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DF28u;
    {
        const bool branch_taken_0x20df28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20df28) {
            ctx->pc = 0x20DF4Cu;
            goto label_20df4c;
        }
    }
    ctx->pc = 0x20DF30u;
    // 0x20df30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20df34: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20df34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20df38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20df38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20df3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20df3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df40: 0xc041934  jal         func_1064D0
    ctx->pc = 0x20DF40u;
    SET_GPR_U32(ctx, 31, 0x20DF48u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x20DF40u, 0x20DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF48u;
label_20df48:
    // 0x20df48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20df48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20df4c:
    // 0x20df4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20df50: 0xc0837f8  jal         func_20DFE0
    ctx->pc = 0x20DF50u;
    SET_GPR_U32(ctx, 31, 0x20DF58u);
    ctx->pc = 0x20DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFE0u, 0x20DF50u, 0x20DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF58u;
label_20df58:
    // 0x20df58: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20df58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20df5c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x20df5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20df60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20df64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20df64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20df68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df6c: 0xc0837e4  jal         func_20DF90
    ctx->pc = 0x20DF6Cu;
    SET_GPR_U32(ctx, 31, 0x20DF74u);
    ctx->pc = 0x20DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF90u, 0x20DF6Cu, 0x20DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF74u;
label_20df74:
    // 0x20df74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20df74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20df78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20df78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20df7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20df7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20df80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20df80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20df84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x20df84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20df88: 0x3e00008  jr          $ra
    ctx->pc = 0x20DF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DF90u;
}
