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

// Function: sub_00469190
// Address: 0x469190 - 0x469280
void sub_00469190_0x469190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469190_0x469190");
#endif

    switch (ctx->pc) {
        case 0x4691c4u: goto label_4691c4;
        case 0x4691dcu: goto label_4691dc;
        case 0x4691f0u: goto label_4691f0;
        case 0x469200u: goto label_469200;
        case 0x469210u: goto label_469210;
        case 0x469224u: goto label_469224;
        case 0x46923cu: goto label_46923c;
        default: break;
    }

    ctx->pc = 0x469190u;

    // 0x469190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x469190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x469194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x469194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x469198: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x469198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46919c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4691a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4691a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4691a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4691a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4691a8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4691a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4691ac: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x4691acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x4691b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4691b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4691b4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4691b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4691b8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4691b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4691bc: 0xc11aa10  jal         func_46A840
    ctx->pc = 0x4691BCu;
    SET_GPR_U32(ctx, 31, 0x4691C4u);
    ctx->pc = 0x46A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A840u, 0x4691BCu, 0x4691C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691C4u;
label_4691c4:
    // 0x4691c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4691c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4691c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4691C8u;
    {
        const bool branch_taken_0x4691c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4691c8) {
            ctx->pc = 0x4691E4u;
            goto label_4691e4;
        }
    }
    ctx->pc = 0x4691D0u;
    // 0x4691d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4691d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4691d4: 0xc11a45c  jal         func_469170
    ctx->pc = 0x4691D4u;
    SET_GPR_U32(ctx, 31, 0x4691DCu);
    ctx->pc = 0x469170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469170u, 0x4691D4u, 0x4691DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691DCu;
label_4691dc:
    // 0x4691dc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4691DCu;
    {
        const bool branch_taken_0x4691dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4691dc) {
            ctx->pc = 0x46925Cu;
            goto label_46925c;
        }
    }
    ctx->pc = 0x4691E4u;
label_4691e4:
    // 0x4691e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4691e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4691e8: 0xc11a440  jal         func_469100
    ctx->pc = 0x4691E8u;
    SET_GPR_U32(ctx, 31, 0x4691F0u);
    ctx->pc = 0x469100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469100u, 0x4691E8u, 0x4691F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691F0u;
label_4691f0:
    // 0x4691f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4691f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4691f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4691f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4691f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4691F8u;
    {
        const bool branch_taken_0x4691f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4691f8) {
            ctx->pc = 0x469248u;
            goto label_469248;
        }
    }
    ctx->pc = 0x469200u;
label_469200:
    // 0x469200: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x469200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x469204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x469204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469208: 0xc11b3c4  jal         func_46CF10
    ctx->pc = 0x469208u;
    SET_GPR_U32(ctx, 31, 0x469210u);
    ctx->pc = 0x46CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF10u, 0x469208u, 0x469210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469210u;
label_469210:
    // 0x469210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x469210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469218: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x469218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46921c: 0xc11aa10  jal         func_46A840
    ctx->pc = 0x46921Cu;
    SET_GPR_U32(ctx, 31, 0x469224u);
    ctx->pc = 0x46A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A840u, 0x46921Cu, 0x469224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469224u;
label_469224:
    // 0x469224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x469224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469228: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x469228u;
    {
        const bool branch_taken_0x469228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x469228) {
            ctx->pc = 0x469244u;
            goto label_469244;
        }
    }
    ctx->pc = 0x469230u;
    // 0x469230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469234: 0xc11a45c  jal         func_469170
    ctx->pc = 0x469234u;
    SET_GPR_U32(ctx, 31, 0x46923Cu);
    ctx->pc = 0x469170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469170u, 0x469234u, 0x46923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46923Cu;
label_46923c:
    // 0x46923c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x46923Cu;
    {
        const bool branch_taken_0x46923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46923c) {
            ctx->pc = 0x46925Cu;
            goto label_46925c;
        }
    }
    ctx->pc = 0x469244u;
label_469244:
    // 0x469244: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x469244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_469248:
    // 0x469248: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x469248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x46924c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x46924Cu;
    {
        const bool branch_taken_0x46924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46924c) {
            ctx->pc = 0x469200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469200;
        }
    }
    ctx->pc = 0x469254u;
    // 0x469254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x469254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x469258: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x469258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_46925c:
    // 0x46925c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469260: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x469260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469264: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x469264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46926c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46926cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469270: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x469270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x469274: 0x3e00008  jr          $ra
    ctx->pc = 0x469274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46927Cu;
    // 0x46927c: 0x0  nop
    ctx->pc = 0x46927cu;
    // NOP
    ctx->pc = 0x469280u;
}
