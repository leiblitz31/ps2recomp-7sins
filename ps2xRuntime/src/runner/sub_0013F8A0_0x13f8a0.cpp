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

// Function: sub_0013F8A0
// Address: 0x13f8a0 - 0x13f970
void sub_0013F8A0_0x13f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F8A0_0x13f8a0");
#endif

    switch (ctx->pc) {
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8dcu: goto label_13f8dc;
        case 0x13f8f0u: goto label_13f8f0;
        case 0x13f904u: goto label_13f904;
        case 0x13f920u: goto label_13f920;
        case 0x13f93cu: goto label_13f93c;
        default: break;
    }

    ctx->pc = 0x13f8a0u;

    // 0x13f8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13f8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f8b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13f8b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13f8b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f8bc: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f8c0: 0xc042290  jal         func_108A40
    ctx->pc = 0x13F8C0u;
    SET_GPR_U32(ctx, 31, 0x13F8C8u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x13F8C0u, 0x13F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8C8u;
label_13f8c8:
    // 0x13f8c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13f8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f8d0: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f8d4: 0xc042288  jal         func_108A20
    ctx->pc = 0x13F8D4u;
    SET_GPR_U32(ctx, 31, 0x13F8DCu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x13F8D4u, 0x13F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8DCu;
label_13f8dc:
    // 0x13f8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8e4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f8e8: 0xc050540  jal         func_141500
    ctx->pc = 0x13F8E8u;
    SET_GPR_U32(ctx, 31, 0x13F8F0u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x13F8E8u, 0x13F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8F0u;
label_13f8f0:
    // 0x13f8f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f8f8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f8fc: 0xc042288  jal         func_108A20
    ctx->pc = 0x13F8FCu;
    SET_GPR_U32(ctx, 31, 0x13F904u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x13F8FCu, 0x13F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F904u;
label_13f904:
    // 0x13f904: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13F904u;
    {
        const bool branch_taken_0x13f904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f904) {
            ctx->pc = 0x13F948u;
            goto label_13f948;
        }
    }
    ctx->pc = 0x13F90Cu;
    // 0x13f90c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f910: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f914: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x13f914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f918: 0xc042128  jal         func_1084A0
    ctx->pc = 0x13F918u;
    SET_GPR_U32(ctx, 31, 0x13F920u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x13F918u, 0x13F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F920u;
label_13f920:
    // 0x13f920: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f924: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x13f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13f928: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F928u;
    {
        const bool branch_taken_0x13f928 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f928) {
            ctx->pc = 0x13F93Cu;
            goto label_13f93c;
        }
    }
    ctx->pc = 0x13F930u;
    // 0x13f930: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f934: 0xc04fed4  jal         func_13FB50
    ctx->pc = 0x13F934u;
    SET_GPR_U32(ctx, 31, 0x13F93Cu);
    ctx->pc = 0x13FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB50u, 0x13F934u, 0x13F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F93Cu;
label_13f93c:
    // 0x13f93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f940: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F940u;
    {
        const bool branch_taken_0x13f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f940) {
            ctx->pc = 0x13F94Cu;
            goto label_13f94c;
        }
    }
    ctx->pc = 0x13F948u;
label_13f948:
    // 0x13f948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f94c:
    // 0x13f94c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f958: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13f958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F964u;
    // 0x13f964: 0x0  nop
    ctx->pc = 0x13f964u;
    // NOP
    // 0x13f968: 0x0  nop
    ctx->pc = 0x13f968u;
    // NOP
    // 0x13f96c: 0x0  nop
    ctx->pc = 0x13f96cu;
    // NOP
    ctx->pc = 0x13f970u;
}
