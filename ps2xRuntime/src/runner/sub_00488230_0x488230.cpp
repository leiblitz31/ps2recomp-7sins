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

// Function: sub_00488230
// Address: 0x488230 - 0x4883b0
void sub_00488230_0x488230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488230_0x488230");
#endif

    switch (ctx->pc) {
        case 0x488284u: goto label_488284;
        case 0x4882acu: goto label_4882ac;
        case 0x4882c0u: goto label_4882c0;
        case 0x488304u: goto label_488304;
        case 0x488314u: goto label_488314;
        default: break;
    }

    ctx->pc = 0x488230u;

    // 0x488230: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x488230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x488234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x488234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x488238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x488238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48823c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x488240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x488244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x488248: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x488248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x48824c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x48824cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x488250: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x488250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x488254: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x488254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x488258: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x488258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x48825c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488260: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x488260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x488264: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x488264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x488268: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x488268u;
    {
        const bool branch_taken_0x488268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488268) {
            ctx->pc = 0x488308u;
            goto label_488308;
        }
    }
    ctx->pc = 0x488270u;
    // 0x488270: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x488270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488274: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x488274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x488278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x488278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48827c: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x48827Cu;
    SET_GPR_U32(ctx, 31, 0x488284u);
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x48827Cu, 0x488284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488284u;
label_488284:
    // 0x488284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x488284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488288: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x488288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48828c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x488290: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x488290u;
    {
        const bool branch_taken_0x488290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488290) {
            ctx->pc = 0x4882C8u;
            goto label_4882c8;
        }
    }
    ctx->pc = 0x488298u;
    // 0x488298: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x488298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48829c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4882a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4882a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4882a4: 0xc121f98  jal         func_487E60
    ctx->pc = 0x4882A4u;
    SET_GPR_U32(ctx, 31, 0x4882ACu);
    ctx->pc = 0x487E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487E60u, 0x4882A4u, 0x4882ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882ACu;
label_4882ac:
    // 0x4882ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4882acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4882b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4882b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4882b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4882b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4882b8: 0xc0eee8c  jal         func_3BBA30
    ctx->pc = 0x4882B8u;
    SET_GPR_U32(ctx, 31, 0x4882C0u);
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x4882B8u, 0x4882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882C0u;
label_4882c0:
    // 0x4882c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4882C0u;
    {
        const bool branch_taken_0x4882c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4882c0) {
            ctx->pc = 0x4882F8u;
            goto label_4882f8;
        }
    }
    ctx->pc = 0x4882C8u;
label_4882c8:
    // 0x4882c8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4882c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4882cc: 0x8c427bcc  lw          $v0, 0x7BCC($v0)
    ctx->pc = 0x4882ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657BCCu));
    // 0x4882d0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x4882d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x4882d4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4882d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4882d8: 0x8c427bd0  lw          $v0, 0x7BD0($v0)
    ctx->pc = 0x4882d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657BD0u));
    // 0x4882dc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x4882dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x4882e0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4882e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4882e4: 0x8c427bd4  lw          $v0, 0x7BD4($v0)
    ctx->pc = 0x4882e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657BD4u));
    // 0x4882e8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x4882e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x4882ec: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4882ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4882f0: 0x8c427bd8  lw          $v0, 0x7BD8($v0)
    ctx->pc = 0x4882f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657BD8u));
    // 0x4882f4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x4882f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_4882f8:
    // 0x4882f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4882f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4882fc: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x4882FCu;
    SET_GPR_U32(ctx, 31, 0x488304u);
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x4882FCu, 0x488304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488304u;
label_488304:
    // 0x488304: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x488304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
label_488308:
    // 0x488308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x488308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48830c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x48830Cu;
    {
        const bool branch_taken_0x48830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48830c) {
            ctx->pc = 0x48836Cu;
            goto label_48836c;
        }
    }
    ctx->pc = 0x488314u;
label_488314:
    // 0x488314: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x488314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488318: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x488318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48831c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x48831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x488320: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x488320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x488324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x488324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x488328: 0x2452004c  addiu       $s2, $v0, 0x4C
    ctx->pc = 0x488328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x48832c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x48832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x488330: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x488330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x488334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x488334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x488338: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x488338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48833c: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x48833cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x488340: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x488340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x488344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x488344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488348: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x488348u;
    {
        const bool branch_taken_0x488348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x488348) {
            ctx->pc = 0x488354u;
            goto label_488354;
        }
    }
    ctx->pc = 0x488350u;
    // 0x488350: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x488350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
label_488354:
    // 0x488354: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x488354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x488358: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x488358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48835c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x488360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x488360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x488364: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x488364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x488368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_48836c:
    // 0x48836c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488370: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x488370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x488374: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x488374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x488378: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x488378u;
    {
        const bool branch_taken_0x488378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488378) {
            ctx->pc = 0x488314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488314;
        }
    }
    ctx->pc = 0x488380u;
    // 0x488380: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x488380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488384: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x488384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x488388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48838c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48838cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x488390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488398: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x488398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x48839c: 0x3e00008  jr          $ra
    ctx->pc = 0x48839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4883A4u;
    // 0x4883a4: 0x0  nop
    ctx->pc = 0x4883a4u;
    // NOP
    // 0x4883a8: 0x0  nop
    ctx->pc = 0x4883a8u;
    // NOP
    // 0x4883ac: 0x0  nop
    ctx->pc = 0x4883acu;
    // NOP
    ctx->pc = 0x4883b0u;
}
