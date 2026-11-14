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

// Function: sub_00472730
// Address: 0x472730 - 0x472810
void sub_00472730_0x472730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472730_0x472730");
#endif

    switch (ctx->pc) {
        case 0x47277cu: goto label_47277c;
        case 0x47278cu: goto label_47278c;
        case 0x4727b4u: goto label_4727b4;
        case 0x4727dcu: goto label_4727dc;
        case 0x4727e8u: goto label_4727e8;
        default: break;
    }

    ctx->pc = 0x472730u;

    // 0x472730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x472730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x472734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x472734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x472738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x472738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x47273c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x472740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x472740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x472744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x472744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x472748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x472748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47274c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x47274cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x472750: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x472750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x472754: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x472754u;
    {
        const bool branch_taken_0x472754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472754) {
            ctx->pc = 0x4727E8u;
            goto label_4727e8;
        }
    }
    ctx->pc = 0x47275Cu;
    // 0x47275c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x472760: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x472760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x472764: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x472764u;
    {
        const bool branch_taken_0x472764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x472764) {
            ctx->pc = 0x47278Cu;
            goto label_47278c;
        }
    }
    ctx->pc = 0x47276Cu;
    // 0x47276c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x47276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x472770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x472770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472774: 0xc1083aa  jal         func_420EA8
    ctx->pc = 0x472774u;
    SET_GPR_U32(ctx, 31, 0x47277Cu);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x472774u, 0x47277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47277Cu;
label_47277c:
    // 0x47277c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x47277cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x472780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x472780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472784: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x472784u;
    SET_GPR_U32(ctx, 31, 0x47278Cu);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x472784u, 0x47278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47278Cu;
label_47278c:
    // 0x47278c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x472790: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x472790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x472794: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x472794u;
    {
        const bool branch_taken_0x472794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x472794) {
            ctx->pc = 0x4727B4u;
            goto label_4727b4;
        }
    }
    ctx->pc = 0x47279Cu;
    // 0x47279c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4727a0: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x4727a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x4727a4: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x4727a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4727a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4727a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4727ac: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x4727ACu;
    SET_GPR_U32(ctx, 31, 0x4727B4u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x4727ACu, 0x4727B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4727B4u;
label_4727b4:
    // 0x4727b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4727b8: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4727b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x4727bc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4727BCu;
    {
        const bool branch_taken_0x4727bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4727bc) {
            ctx->pc = 0x4727DCu;
            goto label_4727dc;
        }
    }
    ctx->pc = 0x4727C4u;
    // 0x4727c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4727c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4727c8: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x4727c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x4727cc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x4727ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4727d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4727d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4727d4: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x4727D4u;
    SET_GPR_U32(ctx, 31, 0x4727DCu);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x4727D4u, 0x4727DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4727DCu;
label_4727dc:
    // 0x4727dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4727dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4727e0: 0xc105fc4  jal         func_417F10
    ctx->pc = 0x4727E0u;
    SET_GPR_U32(ctx, 31, 0x4727E8u);
    ctx->pc = 0x417F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F10u, 0x4727E0u, 0x4727E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4727E8u;
label_4727e8:
    // 0x4727e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4727e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4727ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4727ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4727f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4727f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4727f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4727f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4727f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4727f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4727fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4727fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472800: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x472800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x472804: 0x3e00008  jr          $ra
    ctx->pc = 0x472804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47280Cu;
    // 0x47280c: 0x0  nop
    ctx->pc = 0x47280cu;
    // NOP
    ctx->pc = 0x472810u;
}
