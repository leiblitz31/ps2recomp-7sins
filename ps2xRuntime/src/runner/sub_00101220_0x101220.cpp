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

// Function: sub_00101220
// Address: 0x101220 - 0x1012c0
void sub_00101220_0x101220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101220_0x101220");
#endif

    switch (ctx->pc) {
        case 0x101258u: goto label_101258;
        case 0x10126cu: goto label_10126c;
        case 0x101294u: goto label_101294;
        default: break;
    }

    ctx->pc = 0x101220u;

    // 0x101220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10122c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x101230: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x101230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x101234: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x101234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101238: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101238u;
    {
        const bool branch_taken_0x101238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101238) {
            ctx->pc = 0x10124Cu;
            goto label_10124c;
        }
    }
    ctx->pc = 0x101240u;
    // 0x101240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101244: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x101244u;
    {
        const bool branch_taken_0x101244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101244) {
            ctx->pc = 0x1012A0u;
            goto label_1012a0;
        }
    }
    ctx->pc = 0x10124Cu;
label_10124c:
    // 0x10124c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101250: 0xc11919c  jal         func_464670
    ctx->pc = 0x101250u;
    SET_GPR_U32(ctx, 31, 0x101258u);
    ctx->pc = 0x464670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464670u, 0x101250u, 0x101258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101258u;
label_101258:
    // 0x101258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10125c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x10125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x101260: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x101260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101264: 0xc119354  jal         func_464D50
    ctx->pc = 0x101264u;
    SET_GPR_U32(ctx, 31, 0x10126Cu);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x101264u, 0x10126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10126Cu;
label_10126c:
    // 0x10126c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10126Cu;
    {
        const bool branch_taken_0x10126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10126c) {
            ctx->pc = 0x101280u;
            goto label_101280;
        }
    }
    ctx->pc = 0x101274u;
    // 0x101274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101278: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x101278u;
    {
        const bool branch_taken_0x101278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101278) {
            ctx->pc = 0x1012A0u;
            goto label_1012a0;
        }
    }
    ctx->pc = 0x101280u;
label_101280:
    // 0x101280: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101284: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101288: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x101288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10128c: 0xc1191c4  jal         func_464710
    ctx->pc = 0x10128Cu;
    SET_GPR_U32(ctx, 31, 0x101294u);
    ctx->pc = 0x464710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464710u, 0x10128Cu, 0x101294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101294u;
label_101294:
    // 0x101294: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x101294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101298: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x101298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x10129c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1012a0:
    // 0x1012a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1012a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1012a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1012a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1012a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1012a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1012ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1012ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1012B4u;
    // 0x1012b4: 0x0  nop
    ctx->pc = 0x1012b4u;
    // NOP
    // 0x1012b8: 0x0  nop
    ctx->pc = 0x1012b8u;
    // NOP
    // 0x1012bc: 0x0  nop
    ctx->pc = 0x1012bcu;
    // NOP
    ctx->pc = 0x1012c0u;
}
