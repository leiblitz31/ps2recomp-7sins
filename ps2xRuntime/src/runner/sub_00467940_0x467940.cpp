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

// Function: sub_00467940
// Address: 0x467940 - 0x4679f0
void sub_00467940_0x467940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467940_0x467940");
#endif

    switch (ctx->pc) {
        case 0x467980u: goto label_467980;
        case 0x46799cu: goto label_46799c;
        case 0x4679acu: goto label_4679ac;
        case 0x4679ccu: goto label_4679cc;
        default: break;
    }

    ctx->pc = 0x467940u;

    // 0x467940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x467940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x467944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x467944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x467948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46794c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x467950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x467950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x467954: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x467954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467958: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x467958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46795c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46795Cu;
    {
        const bool branch_taken_0x46795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46795c) {
            ctx->pc = 0x467970u;
            goto label_467970;
        }
    }
    ctx->pc = 0x467964u;
    // 0x467964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x467964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467968: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x467968u;
    {
        const bool branch_taken_0x467968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467968) {
            ctx->pc = 0x4679D0u;
            goto label_4679d0;
        }
    }
    ctx->pc = 0x467970u;
label_467970:
    // 0x467970: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x467970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467974: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x467974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x467978: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x467978u;
    SET_GPR_U32(ctx, 31, 0x467980u);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x467978u, 0x467980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467980u;
label_467980:
    // 0x467980: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x467980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467984: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x467984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467988: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x467988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46798c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46798cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467990: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x467990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467994: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x467994u;
    SET_GPR_U32(ctx, 31, 0x46799Cu);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x467994u, 0x46799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46799Cu;
label_46799c:
    // 0x46799c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4679a0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4679a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4679a4: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x4679A4u;
    SET_GPR_U32(ctx, 31, 0x4679ACu);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x4679A4u, 0x4679ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4679ACu;
label_4679ac:
    // 0x4679ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4679acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4679b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4679b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4679b4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4679b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4679b8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4679b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4679bc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4679bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4679c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4679c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4679c4: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x4679C4u;
    SET_GPR_U32(ctx, 31, 0x4679CCu);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x4679C4u, 0x4679CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4679CCu;
label_4679cc:
    // 0x4679cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4679ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4679d0:
    // 0x4679d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4679d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4679d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4679d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4679d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4679d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4679dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4679dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4679e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4679E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4679E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4679E8u;
    // 0x4679e8: 0x0  nop
    ctx->pc = 0x4679e8u;
    // NOP
    // 0x4679ec: 0x0  nop
    ctx->pc = 0x4679ecu;
    // NOP
    ctx->pc = 0x4679f0u;
}
