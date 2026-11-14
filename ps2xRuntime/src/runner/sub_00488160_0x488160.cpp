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

// Function: sub_00488160
// Address: 0x488160 - 0x488230
void sub_00488160_0x488160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488160_0x488160");
#endif

    switch (ctx->pc) {
        case 0x488188u: goto label_488188;
        case 0x4881a8u: goto label_4881a8;
        case 0x4881d8u: goto label_4881d8;
        case 0x4881e8u: goto label_4881e8;
        default: break;
    }

    ctx->pc = 0x488160u;

    // 0x488160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x488160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x488164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x488168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48816c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48816cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x488170: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x488170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x488174: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x488174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x488178: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x488178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x48817c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48817cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488180: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x488180u;
    {
        const bool branch_taken_0x488180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488180) {
            ctx->pc = 0x4881FCu;
            goto label_4881fc;
        }
    }
    ctx->pc = 0x488188u;
label_488188:
    // 0x488188: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x488188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48818c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x48818cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x488190: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x488190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x488194: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x488194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x488198: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x488198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48819c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48819cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4881a0: 0xc121eb0  jal         func_487AC0
    ctx->pc = 0x4881A0u;
    SET_GPR_U32(ctx, 31, 0x4881A8u);
    ctx->pc = 0x487AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487AC0u, 0x4881A0u, 0x4881A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881A8u;
label_4881a8:
    // 0x4881a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x4881a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4881ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4881acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4881b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4881b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4881b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4881b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4881b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4881b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4881bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x4881bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4881c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4881c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4881c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4881c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4881c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4881c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4881cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4881ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4881d0: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x4881D0u;
    SET_GPR_U32(ctx, 31, 0x4881D8u);
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x4881D0u, 0x4881D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881D8u;
label_4881d8:
    // 0x4881d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4881d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4881dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4881dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4881e0: 0xc0c8560  jal         func_321580
    ctx->pc = 0x4881E0u;
    SET_GPR_U32(ctx, 31, 0x4881E8u);
    ctx->pc = 0x321580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321580u, 0x4881E0u, 0x4881E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881E8u;
label_4881e8:
    // 0x4881e8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x4881e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4881ec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4881ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4881f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4881f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4881f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4881f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4881f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4881f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4881fc:
    // 0x4881fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4881fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x488200: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x488200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x488204: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x488204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x488208: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x488208u;
    {
        const bool branch_taken_0x488208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x488208) {
            ctx->pc = 0x488188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488188;
        }
    }
    ctx->pc = 0x488210u;
    // 0x488210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488218: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x488218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48821c: 0x3e00008  jr          $ra
    ctx->pc = 0x48821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488224u;
    // 0x488224: 0x0  nop
    ctx->pc = 0x488224u;
    // NOP
    // 0x488228: 0x0  nop
    ctx->pc = 0x488228u;
    // NOP
    // 0x48822c: 0x0  nop
    ctx->pc = 0x48822cu;
    // NOP
    ctx->pc = 0x488230u;
}
