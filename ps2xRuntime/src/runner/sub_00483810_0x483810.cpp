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

// Function: sub_00483810
// Address: 0x483810 - 0x4838f0
void sub_00483810_0x483810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483810_0x483810");
#endif

    switch (ctx->pc) {
        case 0x48383cu: goto label_48383c;
        case 0x48384cu: goto label_48384c;
        case 0x48385cu: goto label_48385c;
        case 0x483878u: goto label_483878;
        case 0x4838a8u: goto label_4838a8;
        case 0x4838b8u: goto label_4838b8;
        case 0x4838d0u: goto label_4838d0;
        default: break;
    }

    ctx->pc = 0x483810u;

    // 0x483810: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x483810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x483814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x483814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x483818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48381c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x483820: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x483820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x483824: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x483824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x483828: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x483828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x48382c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x48382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x483830: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x483830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x483834: 0xc120e60  jal         func_483980
    ctx->pc = 0x483834u;
    SET_GPR_U32(ctx, 31, 0x48383Cu);
    ctx->pc = 0x483980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483980u, 0x483834u, 0x48383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48383Cu;
label_48383c:
    // 0x48383c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x483840: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x483840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x483844: 0xc0a0294  jal         func_280A50
    ctx->pc = 0x483844u;
    SET_GPR_U32(ctx, 31, 0x48384Cu);
    ctx->pc = 0x280A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A50u, 0x483844u, 0x48384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48384Cu;
label_48384c:
    // 0x48384c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x48384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x483850: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x483850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x483854: 0xc120e54  jal         func_483950
    ctx->pc = 0x483854u;
    SET_GPR_U32(ctx, 31, 0x48385Cu);
    ctx->pc = 0x483950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483950u, 0x483854u, 0x48385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48385Cu;
label_48385c:
    // 0x48385c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x48385Cu;
    {
        const bool branch_taken_0x48385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48385c) {
            ctx->pc = 0x4838C4u;
            goto label_4838c4;
        }
    }
    ctx->pc = 0x483864u;
    // 0x483864: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x483864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x483868: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x483868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x48386c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x48386Cu;
    {
        const bool branch_taken_0x48386c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48386c) {
            ctx->pc = 0x483894u;
            goto label_483894;
        }
    }
    ctx->pc = 0x483874u;
    // 0x483874: 0x608821  addu        $s1, $v1, $zero
    ctx->pc = 0x483874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_483878:
    // 0x483878: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x483878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x48387c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x483880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x483880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x483884: 0x0  nop
    ctx->pc = 0x483884u;
    // NOP
    // 0x483888: 0x0  nop
    ctx->pc = 0x483888u;
    // NOP
    // 0x48388c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48388Cu;
    {
        const bool branch_taken_0x48388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48388c) {
            ctx->pc = 0x483878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483878;
        }
    }
    ctx->pc = 0x483894u;
label_483894:
    // 0x483894: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x483894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x483898: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x483898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48389c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x48389cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4838a0: 0xc120e3c  jal         func_4838F0
    ctx->pc = 0x4838A0u;
    SET_GPR_U32(ctx, 31, 0x4838A8u);
    ctx->pc = 0x4838F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4838F0u, 0x4838A0u, 0x4838A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4838A8u;
label_4838a8:
    // 0x4838a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4838a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4838ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4838acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4838b0: 0xc12148c  jal         func_485230
    ctx->pc = 0x4838B0u;
    SET_GPR_U32(ctx, 31, 0x4838B8u);
    ctx->pc = 0x485230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485230u, 0x4838B0u, 0x4838B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4838B8u;
label_4838b8:
    // 0x4838b8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4838b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4838bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4838BCu;
    {
        const bool branch_taken_0x4838bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4838bc) {
            ctx->pc = 0x4838D4u;
            goto label_4838d4;
        }
    }
    ctx->pc = 0x4838C4u;
label_4838c4:
    // 0x4838c4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x4838c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4838c8: 0xc0a0428  jal         func_2810A0
    ctx->pc = 0x4838C8u;
    SET_GPR_U32(ctx, 31, 0x4838D0u);
    ctx->pc = 0x2810A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2810A0u, 0x4838C8u, 0x4838D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4838D0u;
label_4838d0:
    // 0x4838d0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4838d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4838d4:
    // 0x4838d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4838d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4838d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4838d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4838dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4838dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4838e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4838e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4838e4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4838e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4838e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4838E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4838E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4838F0u;
}
