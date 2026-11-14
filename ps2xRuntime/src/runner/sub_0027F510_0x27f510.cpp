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

// Function: sub_0027F510
// Address: 0x27f510 - 0x27f5e0
void sub_0027F510_0x27f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F510_0x27f510");
#endif

    switch (ctx->pc) {
        case 0x27f54cu: goto label_27f54c;
        case 0x27f564u: goto label_27f564;
        case 0x27f570u: goto label_27f570;
        case 0x27f578u: goto label_27f578;
        case 0x27f58cu: goto label_27f58c;
        case 0x27f5a0u: goto label_27f5a0;
        case 0x27f5b0u: goto label_27f5b0;
        default: break;
    }

    ctx->pc = 0x27f510u;

    // 0x27f510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27f514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27f518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27f51c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27f520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27f524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f52c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x27f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x27f530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27f530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f534: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27f534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f538: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x27f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f53c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x27f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x27f540: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f544: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27F544u;
    SET_GPR_U32(ctx, 31, 0x27F54Cu);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27F544u, 0x27F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F54Cu;
label_27f54c:
    // 0x27f54c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27f54cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27f550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f554: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x27f554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x27f558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f55c: 0xc08a724  jal         func_229C90
    ctx->pc = 0x27F55Cu;
    SET_GPR_U32(ctx, 31, 0x27F564u);
    ctx->pc = 0x229C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C90u, 0x27F55Cu, 0x27F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F564u;
label_27f564:
    // 0x27f564: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f568: 0xc09fd78  jal         func_27F5E0
    ctx->pc = 0x27F568u;
    SET_GPR_U32(ctx, 31, 0x27F570u);
    ctx->pc = 0x27F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F5E0u, 0x27F568u, 0x27F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F570u;
label_27f570:
    // 0x27f570: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x27F570u;
    SET_GPR_U32(ctx, 31, 0x27F578u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27F570u, 0x27F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F578u;
label_27f578:
    // 0x27f578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f580: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27f580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f584: 0xc120438  jal         func_4810E0
    ctx->pc = 0x27F584u;
    SET_GPR_U32(ctx, 31, 0x27F58Cu);
    ctx->pc = 0x4810E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4810E0u, 0x27F584u, 0x27F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F58Cu;
label_27f58c:
    // 0x27f58c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f590: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x27f590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x27f594: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f598: 0xc09fda8  jal         func_27F6A0
    ctx->pc = 0x27F598u;
    SET_GPR_U32(ctx, 31, 0x27F5A0u);
    ctx->pc = 0x27F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F6A0u, 0x27F598u, 0x27F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5A0u;
label_27f5a0:
    // 0x27f5a0: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x27f5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5a8: 0xc08a724  jal         func_229C90
    ctx->pc = 0x27F5A8u;
    SET_GPR_U32(ctx, 31, 0x27F5B0u);
    ctx->pc = 0x229C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C90u, 0x27F5A8u, 0x27F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5B0u;
label_27f5b0:
    // 0x27f5b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27f5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f5b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27f5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f5b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f5b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f5bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f5c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f5c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f5c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27f5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27f5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F5D4u;
    // 0x27f5d4: 0x0  nop
    ctx->pc = 0x27f5d4u;
    // NOP
    // 0x27f5d8: 0x0  nop
    ctx->pc = 0x27f5d8u;
    // NOP
    // 0x27f5dc: 0x0  nop
    ctx->pc = 0x27f5dcu;
    // NOP
    ctx->pc = 0x27f5e0u;
}
