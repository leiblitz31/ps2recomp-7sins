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

// Function: sub_002DE500
// Address: 0x2de500 - 0x2de5d0
void sub_002DE500_0x2de500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE500_0x2de500");
#endif

    switch (ctx->pc) {
        case 0x2de534u: goto label_2de534;
        case 0x2de544u: goto label_2de544;
        case 0x2de554u: goto label_2de554;
        case 0x2de564u: goto label_2de564;
        case 0x2de574u: goto label_2de574;
        case 0x2de584u: goto label_2de584;
        case 0x2de594u: goto label_2de594;
        default: break;
    }

    ctx->pc = 0x2de500u;

    // 0x2de500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2de500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2de504: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2de504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2de508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2de508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2de50c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2de50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2de510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de51c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2de51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2de520: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2de520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de524: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2de524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2de528: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2de528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2de52c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DE52Cu;
    SET_GPR_U32(ctx, 31, 0x2DE534u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DE52Cu, 0x2DE534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE534u;
label_2de534:
    // 0x2de534: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2de534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2de538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de53c: 0xc091aa8  jal         func_246AA0
    ctx->pc = 0x2DE53Cu;
    SET_GPR_U32(ctx, 31, 0x2DE544u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x2DE53Cu, 0x2DE544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE544u;
label_2de544:
    // 0x2de544: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de54c: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2DE54Cu;
    SET_GPR_U32(ctx, 31, 0x2DE554u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2DE54Cu, 0x2DE554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE554u;
label_2de554:
    // 0x2de554: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2de554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de55c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DE55Cu;
    {
        const bool branch_taken_0x2de55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de55c) {
            ctx->pc = 0x2DE598u;
            goto label_2de598;
        }
    }
    ctx->pc = 0x2DE564u;
label_2de564:
    // 0x2de564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de56c: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2DE56Cu;
    SET_GPR_U32(ctx, 31, 0x2DE574u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2DE56Cu, 0x2DE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE574u;
label_2de574:
    // 0x2de574: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2de574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de578: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2de578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2de57c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DE57Cu;
    SET_GPR_U32(ctx, 31, 0x2DE584u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DE57Cu, 0x2DE584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE584u;
label_2de584:
    // 0x2de584: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2de584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2de588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de58c: 0xc0b860c  jal         func_2E1830
    ctx->pc = 0x2DE58Cu;
    SET_GPR_U32(ctx, 31, 0x2DE594u);
    ctx->pc = 0x2E1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1830u, 0x2DE58Cu, 0x2DE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE594u;
label_2de594:
    // 0x2de594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2de594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2de598:
    // 0x2de598: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x2de598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2de59c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DE59Cu;
    {
        const bool branch_taken_0x2de59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de59c) {
            ctx->pc = 0x2DE564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de564;
        }
    }
    ctx->pc = 0x2DE5A4u;
    // 0x2de5a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2de5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de5a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de5a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de5ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2de5acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de5b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de5b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de5bc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2de5bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2de5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE5C8u;
    // 0x2de5c8: 0x0  nop
    ctx->pc = 0x2de5c8u;
    // NOP
    // 0x2de5cc: 0x0  nop
    ctx->pc = 0x2de5ccu;
    // NOP
    ctx->pc = 0x2de5d0u;
}
