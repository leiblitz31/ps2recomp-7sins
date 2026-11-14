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

// Function: sub_00452250
// Address: 0x452250 - 0x452370
void sub_00452250_0x452250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452250_0x452250");
#endif

    switch (ctx->pc) {
        case 0x4522c0u: goto label_4522c0;
        case 0x4522d0u: goto label_4522d0;
        case 0x452310u: goto label_452310;
        case 0x452320u: goto label_452320;
        case 0x452338u: goto label_452338;
        case 0x452358u: goto label_452358;
        default: break;
    }

    ctx->pc = 0x452250u;

    // 0x452250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45225c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x45225cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x452260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452264: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x452264u;
    {
        const bool branch_taken_0x452264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452264) {
            ctx->pc = 0x452358u;
            goto label_452358;
        }
    }
    ctx->pc = 0x45226Cu;
    // 0x45226c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452270: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x452270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x452274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x452274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452278: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x452278u;
    {
        const bool branch_taken_0x452278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x452278) {
            ctx->pc = 0x4522E0u;
            goto label_4522e0;
        }
    }
    ctx->pc = 0x452280u;
    // 0x452280: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x452280u;
    {
        const bool branch_taken_0x452280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x452280) {
            ctx->pc = 0x452290u;
            goto label_452290;
        }
    }
    ctx->pc = 0x452288u;
    // 0x452288: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x452288u;
    {
        const bool branch_taken_0x452288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452288) {
            ctx->pc = 0x452328u;
            goto label_452328;
        }
    }
    ctx->pc = 0x452290u;
label_452290:
    // 0x452290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452294: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x452294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x452298: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x452298u;
    {
        const bool branch_taken_0x452298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452298) {
            ctx->pc = 0x452328u;
            goto label_452328;
        }
    }
    ctx->pc = 0x4522A0u;
    // 0x4522a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4522a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4522a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4522a8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4522A8u;
    {
        const bool branch_taken_0x4522a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4522a8) {
            ctx->pc = 0x452328u;
            goto label_452328;
        }
    }
    ctx->pc = 0x4522B0u;
    // 0x4522b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4522b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4522b4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4522b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4522b8: 0xc082064  jal         func_208190
    ctx->pc = 0x4522B8u;
    SET_GPR_U32(ctx, 31, 0x4522C0u);
    ctx->pc = 0x208190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208190u, 0x4522B8u, 0x4522C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522C0u;
label_4522c0:
    // 0x4522c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4522c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4522c4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4522c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4522c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4522C8u;
    SET_GPR_U32(ctx, 31, 0x4522D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4522C8u, 0x4522D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522D0u;
label_4522d0:
    // 0x4522d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4522d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4522d4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4522d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4522d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4522D8u;
    {
        const bool branch_taken_0x4522d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4522d8) {
            ctx->pc = 0x452328u;
            goto label_452328;
        }
    }
    ctx->pc = 0x4522E0u;
label_4522e0:
    // 0x4522e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4522e4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4522e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4522e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4522E8u;
    {
        const bool branch_taken_0x4522e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4522e8) {
            ctx->pc = 0x452328u;
            goto label_452328;
        }
    }
    ctx->pc = 0x4522F0u;
    // 0x4522f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4522f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4522f4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4522f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4522f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4522F8u;
    {
        const bool branch_taken_0x4522f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4522f8) {
            ctx->pc = 0x452328u;
            goto label_452328;
        }
    }
    ctx->pc = 0x452300u;
    // 0x452300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452304: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x452304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x452308: 0xc1148dc  jal         func_452370
    ctx->pc = 0x452308u;
    SET_GPR_U32(ctx, 31, 0x452310u);
    ctx->pc = 0x452370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452370u, 0x452308u, 0x452310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452310u;
label_452310:
    // 0x452310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452314: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x452314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x452318: 0xc119c5c  jal         func_467170
    ctx->pc = 0x452318u;
    SET_GPR_U32(ctx, 31, 0x452320u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x452318u, 0x452320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452320u;
label_452320:
    // 0x452320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452324: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x452324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_452328:
    // 0x452328: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45232c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x452330: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x452330u;
    SET_GPR_U32(ctx, 31, 0x452338u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452330u, 0x452338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452338u;
label_452338:
    // 0x452338: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x452338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45233c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x45233cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x452340: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x452340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x452344: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x452344u;
    {
        const bool branch_taken_0x452344 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x452344) {
            ctx->pc = 0x452358u;
            goto label_452358;
        }
    }
    ctx->pc = 0x45234Cu;
    // 0x45234c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452350: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x452350u;
    SET_GPR_U32(ctx, 31, 0x452358u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x452350u, 0x452358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452358u;
label_452358:
    // 0x452358: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45235c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45235cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452360: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x452360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x452364: 0x3e00008  jr          $ra
    ctx->pc = 0x452364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45236Cu;
    // 0x45236c: 0x0  nop
    ctx->pc = 0x45236cu;
    // NOP
    ctx->pc = 0x452370u;
}
