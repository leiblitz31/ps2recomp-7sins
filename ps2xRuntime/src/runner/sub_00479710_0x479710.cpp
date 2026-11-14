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

// Function: sub_00479710
// Address: 0x479710 - 0x479830
void sub_00479710_0x479710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479710_0x479710");
#endif

    switch (ctx->pc) {
        case 0x47974cu: goto label_47974c;
        case 0x479774u: goto label_479774;
        case 0x4797a4u: goto label_4797a4;
        case 0x4797f4u: goto label_4797f4;
        case 0x479818u: goto label_479818;
        default: break;
    }

    ctx->pc = 0x479710u;

    // 0x479710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x479710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x479714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x479714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x479718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47971c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479720: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x479720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x479724: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x479724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x479728: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x479728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x47972c: 0xffa70060  sd          $a3, 0x60($sp)
    ctx->pc = 0x47972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 7));
    // 0x479730: 0xa3a80070  sb          $t0, 0x70($sp)
    ctx->pc = 0x479730u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 8));
    // 0x479734: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x479734u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479738: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47973c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47973cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x479740: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x479740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x479744: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x479744u;
    {
        const bool branch_taken_0x479744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479744) {
            ctx->pc = 0x4797B0u;
            goto label_4797b0;
        }
    }
    ctx->pc = 0x47974Cu;
label_47974c:
    // 0x47974c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x47974cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x479750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479754: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x479754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479758: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x479758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x47975c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x47975cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x479760: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479764: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x479764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479768: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x479768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x47976c: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x47976Cu;
    SET_GPR_U32(ctx, 31, 0x479774u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x47976Cu, 0x479774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479774u;
label_479774:
    // 0x479774: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x479774u;
    {
        const bool branch_taken_0x479774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479774) {
            ctx->pc = 0x479780u;
            goto label_479780;
        }
    }
    ctx->pc = 0x47977Cu;
    // 0x47977c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x47977cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_479780:
    // 0x479780: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479784: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x479784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x479788: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47978c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x47978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479790: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x479790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x479794: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479798: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x479798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47979c: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x47979Cu;
    SET_GPR_U32(ctx, 31, 0x4797A4u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x47979Cu, 0x4797A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4797A4u;
label_4797a4:
    // 0x4797a4: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x4797a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x4797a8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x4797a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4797ac: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x4797acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4797b0:
    // 0x4797b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4797b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4797b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4797b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4797b8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x4797B8u;
    {
        const bool branch_taken_0x4797b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4797b8) {
            ctx->pc = 0x47974Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47974c;
        }
    }
    ctx->pc = 0x4797C0u;
    // 0x4797c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4797c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4797c4: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4797C4u;
    {
        const bool branch_taken_0x4797c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4797c4) {
            ctx->pc = 0x4797FCu;
            goto label_4797fc;
        }
    }
    ctx->pc = 0x4797CCu;
    // 0x4797cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4797ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4797d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x4797d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4797d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4797d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4797d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4797d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4797dc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x4797dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4797e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x4797e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4797e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4797e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4797e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4797e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4797ec: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x4797ECu;
    SET_GPR_U32(ctx, 31, 0x4797F4u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x4797ECu, 0x4797F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4797F4u;
label_4797f4:
    // 0x4797f4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x4797f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4797f8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4797f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4797fc:
    // 0x4797fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4797fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479800: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x479800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479804: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x479804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479808: 0xdfa70060  ld          $a3, 0x60($sp)
    ctx->pc = 0x479808u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47980c: 0x83a80070  lb          $t0, 0x70($sp)
    ctx->pc = 0x47980cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x479810: 0xc11e60c  jal         func_479830
    ctx->pc = 0x479810u;
    SET_GPR_U32(ctx, 31, 0x479818u);
    ctx->pc = 0x479830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479830u, 0x479810u, 0x479818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479818u;
label_479818:
    // 0x479818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x479818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47981c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47981cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479824: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x479824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x479828: 0x3e00008  jr          $ra
    ctx->pc = 0x479828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479830u;
}
