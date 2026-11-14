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

// Function: sub_00457750
// Address: 0x457750 - 0x457830
void sub_00457750_0x457750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457750_0x457750");
#endif

    switch (ctx->pc) {
        case 0x45777cu: goto label_45777c;
        case 0x45778cu: goto label_45778c;
        case 0x45779cu: goto label_45779c;
        case 0x4577b8u: goto label_4577b8;
        case 0x4577e8u: goto label_4577e8;
        case 0x4577f8u: goto label_4577f8;
        case 0x457810u: goto label_457810;
        default: break;
    }

    ctx->pc = 0x457750u;

    // 0x457750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x457750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x457754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x457754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x457758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x457758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45775c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x457760: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x457760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x457764: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x457764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x457768: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x457768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x45776c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x457770: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x457770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x457774: 0xc115e54  jal         func_457950
    ctx->pc = 0x457774u;
    SET_GPR_U32(ctx, 31, 0x45777Cu);
    ctx->pc = 0x457950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457950u, 0x457774u, 0x45777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45777Cu;
label_45777c:
    // 0x45777c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x457780: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x457780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x457784: 0xc115e24  jal         func_457890
    ctx->pc = 0x457784u;
    SET_GPR_U32(ctx, 31, 0x45778Cu);
    ctx->pc = 0x457890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457890u, 0x457784u, 0x45778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45778Cu;
label_45778c:
    // 0x45778c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x45778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x457790: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x457790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x457794: 0xc115eb8  jal         func_457AE0
    ctx->pc = 0x457794u;
    SET_GPR_U32(ctx, 31, 0x45779Cu);
    ctx->pc = 0x457AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AE0u, 0x457794u, 0x45779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45779Cu;
label_45779c:
    // 0x45779c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x45779Cu;
    {
        const bool branch_taken_0x45779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45779c) {
            ctx->pc = 0x457804u;
            goto label_457804;
        }
    }
    ctx->pc = 0x4577A4u;
    // 0x4577a4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x4577a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4577a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4577a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4577ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4577ACu;
    {
        const bool branch_taken_0x4577ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4577ac) {
            ctx->pc = 0x4577D4u;
            goto label_4577d4;
        }
    }
    ctx->pc = 0x4577B4u;
    // 0x4577b4: 0x608821  addu        $s1, $v1, $zero
    ctx->pc = 0x4577b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_4577b8:
    // 0x4577b8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4577b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4577bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4577bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4577c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4577c4: 0x0  nop
    ctx->pc = 0x4577c4u;
    // NOP
    // 0x4577c8: 0x0  nop
    ctx->pc = 0x4577c8u;
    // NOP
    // 0x4577cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4577CCu;
    {
        const bool branch_taken_0x4577cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4577cc) {
            ctx->pc = 0x4577B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4577b8;
        }
    }
    ctx->pc = 0x4577D4u;
label_4577d4:
    // 0x4577d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4577d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4577d8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x4577d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4577dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4577dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4577e0: 0xc115e0c  jal         func_457830
    ctx->pc = 0x4577E0u;
    SET_GPR_U32(ctx, 31, 0x4577E8u);
    ctx->pc = 0x457830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457830u, 0x4577E0u, 0x4577E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4577E8u;
label_4577e8:
    // 0x4577e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4577e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4577ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4577ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4577f0: 0xc116160  jal         func_458580
    ctx->pc = 0x4577F0u;
    SET_GPR_U32(ctx, 31, 0x4577F8u);
    ctx->pc = 0x458580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458580u, 0x4577F0u, 0x4577F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4577F8u;
label_4577f8:
    // 0x4577f8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4577f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4577fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4577FCu;
    {
        const bool branch_taken_0x4577fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4577fc) {
            ctx->pc = 0x457814u;
            goto label_457814;
        }
    }
    ctx->pc = 0x457804u;
label_457804:
    // 0x457804: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x457804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x457808: 0xc115db4  jal         func_4576D0
    ctx->pc = 0x457808u;
    SET_GPR_U32(ctx, 31, 0x457810u);
    ctx->pc = 0x4576D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576D0u, 0x457808u, 0x457810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457810u;
label_457810:
    // 0x457810: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x457810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_457814:
    // 0x457814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x457814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x457818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45781c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45781cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457824: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x457824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x457828: 0x3e00008  jr          $ra
    ctx->pc = 0x457828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457830u;
}
