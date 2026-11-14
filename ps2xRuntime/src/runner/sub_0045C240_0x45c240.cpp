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

// Function: sub_0045C240
// Address: 0x45c240 - 0x45c350
void sub_0045C240_0x45c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C240_0x45c240");
#endif

    switch (ctx->pc) {
        case 0x45c290u: goto label_45c290;
        case 0x45c2ccu: goto label_45c2cc;
        case 0x45c2dcu: goto label_45c2dc;
        case 0x45c2e8u: goto label_45c2e8;
        case 0x45c328u: goto label_45c328;
        default: break;
    }

    ctx->pc = 0x45c240u;

    // 0x45c240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45c244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45c248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45c24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45c250: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x45c250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x45c254: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x45c254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x45c258: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c25c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45C25Cu;
    {
        const bool branch_taken_0x45c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c25c) {
            ctx->pc = 0x45C274u;
            goto label_45c274;
        }
    }
    ctx->pc = 0x45C264u;
    // 0x45c264: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c268: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x45c26c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45C26Cu;
    {
        const bool branch_taken_0x45c26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c26c) {
            ctx->pc = 0x45C280u;
            goto label_45c280;
        }
    }
    ctx->pc = 0x45C274u;
label_45c274:
    // 0x45c274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45c274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c278: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x45C278u;
    {
        const bool branch_taken_0x45c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c278) {
            ctx->pc = 0x45C32Cu;
            goto label_45c32c;
        }
    }
    ctx->pc = 0x45C280u;
label_45c280:
    // 0x45c280: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c284: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45c284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x45c288: 0xc116f70  jal         func_45BDC0
    ctx->pc = 0x45C288u;
    SET_GPR_U32(ctx, 31, 0x45C290u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45C288u, 0x45C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C290u;
label_45c290:
    // 0x45c290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c294: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x45c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c298: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x45c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x45c29c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x45c29cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x45c2a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x45C2A0u;
    {
        const bool branch_taken_0x45c2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c2a0) {
            ctx->pc = 0x45C2B0u;
            goto label_45c2b0;
        }
    }
    ctx->pc = 0x45C2A8u;
    // 0x45c2a8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x45c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x45c2ac: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x45c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_45c2b0:
    // 0x45c2b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c2b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45c2b8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x45c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x45c2bc: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x45c2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c2c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45c2c4: 0xc1173f8  jal         func_45CFE0
    ctx->pc = 0x45C2C4u;
    SET_GPR_U32(ctx, 31, 0x45C2CCu);
    ctx->pc = 0x45CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45CFE0u, 0x45C2C4u, 0x45C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C2CCu;
label_45c2cc:
    // 0x45c2cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x45c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45c2d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x45c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45c2d4: 0xc1170d4  jal         func_45C350
    ctx->pc = 0x45C2D4u;
    SET_GPR_U32(ctx, 31, 0x45C2DCu);
    ctx->pc = 0x45C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C350u, 0x45C2D4u, 0x45C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C2DCu;
label_45c2dc:
    // 0x45c2dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x45c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45c2e0: 0xc116f70  jal         func_45BDC0
    ctx->pc = 0x45C2E0u;
    SET_GPR_U32(ctx, 31, 0x45C2E8u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45C2E0u, 0x45C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C2E8u;
label_45c2e8:
    // 0x45c2e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c2ec: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x45C2ECu;
    {
        const bool branch_taken_0x45c2ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c2ec) {
            ctx->pc = 0x45C308u;
            goto label_45c308;
        }
    }
    ctx->pc = 0x45C2F4u;
    // 0x45c2f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c2f8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x45c2fc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x45c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x45c300: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45C300u;
    {
        const bool branch_taken_0x45c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c300) {
            ctx->pc = 0x45C314u;
            goto label_45c314;
        }
    }
    ctx->pc = 0x45C308u;
label_45c308:
    // 0x45c308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45c308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c30c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45C30Cu;
    {
        const bool branch_taken_0x45c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c30c) {
            ctx->pc = 0x45C32Cu;
            goto label_45c32c;
        }
    }
    ctx->pc = 0x45C314u;
label_45c314:
    // 0x45c314: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c318: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x45c31c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c320: 0xc116f64  jal         func_45BD90
    ctx->pc = 0x45C320u;
    SET_GPR_U32(ctx, 31, 0x45C328u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45C320u, 0x45C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C328u;
label_45c328:
    // 0x45c328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c32c:
    // 0x45c32c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45c32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45c330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45c334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c338: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45c33c: 0x3e00008  jr          $ra
    ctx->pc = 0x45C33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45C344u;
    // 0x45c344: 0x0  nop
    ctx->pc = 0x45c344u;
    // NOP
    // 0x45c348: 0x0  nop
    ctx->pc = 0x45c348u;
    // NOP
    // 0x45c34c: 0x0  nop
    ctx->pc = 0x45c34cu;
    // NOP
    ctx->pc = 0x45c350u;
}
