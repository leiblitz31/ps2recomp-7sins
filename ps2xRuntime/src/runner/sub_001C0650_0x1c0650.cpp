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

// Function: sub_001C0650
// Address: 0x1c0650 - 0x1c06f0
void sub_001C0650_0x1c0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0650_0x1c0650");
#endif

    switch (ctx->pc) {
        case 0x1c0698u: goto label_1c0698;
        default: break;
    }

    ctx->pc = 0x1c0650u;

    // 0x1c0650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c0650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c0654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0658: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c0658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c065c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c0660: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c0660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c0664: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x1c0664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x1c0668: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1c0668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1c066c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c066cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1c0670: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1c0670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1c0674: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c0674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c0678: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c067c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0680: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x1c0680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1c0684: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1c0684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c0688: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c068c: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x1c068cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c0690: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1C0690u;
    SET_GPR_U32(ctx, 31, 0x1C0698u);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1C0690u, 0x1C0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0698u;
label_1c0698:
    // 0x1c0698: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c0698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c069c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c06a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c06a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c06a8: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1c06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c06ac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c06acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c06b0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C06B0u;
    {
        const bool branch_taken_0x1c06b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06b0) {
            ctx->pc = 0x1C06CCu;
            goto label_1c06cc;
        }
    }
    ctx->pc = 0x1C06B8u;
    // 0x1c06b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c06bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c06c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1c06c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c06c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C06C4u;
    {
        const bool branch_taken_0x1c06c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06c4) {
            ctx->pc = 0x1C06D8u;
            goto label_1c06d8;
        }
    }
    ctx->pc = 0x1C06CCu;
label_1c06cc:
    // 0x1c06cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c06ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c06d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C06D0u;
    {
        const bool branch_taken_0x1c06d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06d0) {
            ctx->pc = 0x1C06DCu;
            goto label_1c06dc;
        }
    }
    ctx->pc = 0x1C06D8u;
label_1c06d8:
    // 0x1c06d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c06dc:
    // 0x1c06dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c06dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c06e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c06e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c06e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C06E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C06E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C06ECu;
    // 0x1c06ec: 0x0  nop
    ctx->pc = 0x1c06ecu;
    // NOP
    ctx->pc = 0x1c06f0u;
}
