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

// Function: sub_0046F210
// Address: 0x46f210 - 0x46f350
void sub_0046F210_0x46f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F210_0x46f210");
#endif

    switch (ctx->pc) {
        case 0x46f22cu: goto label_46f22c;
        case 0x46f248u: goto label_46f248;
        case 0x46f258u: goto label_46f258;
        case 0x46f270u: goto label_46f270;
        case 0x46f2ecu: goto label_46f2ec;
        case 0x46f2fcu: goto label_46f2fc;
        case 0x46f314u: goto label_46f314;
        case 0x46f334u: goto label_46f334;
        default: break;
    }

    ctx->pc = 0x46f210u;

    // 0x46f210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46f214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46f218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46f21c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46f220: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f224: 0xc11af1c  jal         func_46BC70
    ctx->pc = 0x46F224u;
    SET_GPR_U32(ctx, 31, 0x46F22Cu);
    ctx->pc = 0x46BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BC70u, 0x46F224u, 0x46F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F22Cu;
label_46f22c:
    // 0x46f22c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46f230: 0x24636d18  addiu       $v1, $v1, 0x6D18
    ctx->pc = 0x46f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27928));
    // 0x46f234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46f238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46f23c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x46f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x46f240: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x46F240u;
    SET_GPR_U32(ctx, 31, 0x46F248u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x46F240u, 0x46F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F248u;
label_46f248:
    // 0x46f248: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x46f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x46f24c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46f24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f250: 0xc0400e0  jal         func_100380
    ctx->pc = 0x46F250u;
    SET_GPR_U32(ctx, 31, 0x46F258u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x46F250u, 0x46F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F258u;
label_46f258:
    // 0x46f258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46f258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f25c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46F25Cu;
    {
        const bool branch_taken_0x46f25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f25c) {
            ctx->pc = 0x46F274u;
            goto label_46f274;
        }
    }
    ctx->pc = 0x46F264u;
    // 0x46f264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f268: 0xc11a39c  jal         func_468E70
    ctx->pc = 0x46F268u;
    SET_GPR_U32(ctx, 31, 0x46F270u);
    ctx->pc = 0x468E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468E70u, 0x46F268u, 0x46F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F270u;
label_46f270:
    // 0x46f270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46f270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f274:
    // 0x46f274: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f278: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x46f278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x46f27c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46f280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46f284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f288: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46f28c: 0x3e00008  jr          $ra
    ctx->pc = 0x46F28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F294u;
    // 0x46f294: 0x0  nop
    ctx->pc = 0x46f294u;
    // NOP
    // 0x46f298: 0x0  nop
    ctx->pc = 0x46f298u;
    // NOP
    // 0x46f29c: 0x0  nop
    ctx->pc = 0x46f29cu;
    // NOP
    // 0x46f2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46f2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f2a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f2ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46f2acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46f2b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f2b4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x46F2B4u;
    {
        const bool branch_taken_0x46f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f2b4) {
            ctx->pc = 0x46F334u;
            goto label_46f334;
        }
    }
    ctx->pc = 0x46F2BCu;
    // 0x46f2bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46f2c0: 0x24636d18  addiu       $v1, $v1, 0x6D18
    ctx->pc = 0x46f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27928));
    // 0x46f2c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f2c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46f2cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f2d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f2d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x46F2D4u;
    {
        const bool branch_taken_0x46f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f2d4) {
            ctx->pc = 0x46F304u;
            goto label_46f304;
        }
    }
    ctx->pc = 0x46F2DCu;
    // 0x46f2dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f2e0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f2e4: 0xc11bcd4  jal         func_46F350
    ctx->pc = 0x46F2E4u;
    SET_GPR_U32(ctx, 31, 0x46F2ECu);
    ctx->pc = 0x46F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F350u, 0x46F2E4u, 0x46F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F2ECu;
label_46f2ec:
    // 0x46f2ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f2f0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f2f4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x46F2F4u;
    SET_GPR_U32(ctx, 31, 0x46F2FCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x46F2F4u, 0x46F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F2FCu;
label_46f2fc:
    // 0x46f2fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f300: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x46f300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_46f304:
    // 0x46f304: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46f304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46f308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f30c: 0xc11b034  jal         func_46C0D0
    ctx->pc = 0x46F30Cu;
    SET_GPR_U32(ctx, 31, 0x46F314u);
    ctx->pc = 0x46C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C0D0u, 0x46F30Cu, 0x46F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F314u;
label_46f314:
    // 0x46f314: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46f314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f318: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46f318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46f31c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46f31cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46f320: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46F320u;
    {
        const bool branch_taken_0x46f320 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46f320) {
            ctx->pc = 0x46F334u;
            goto label_46f334;
        }
    }
    ctx->pc = 0x46F328u;
    // 0x46f328: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f32c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46F32Cu;
    SET_GPR_U32(ctx, 31, 0x46F334u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46F32Cu, 0x46F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F334u;
label_46f334:
    // 0x46f334: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f33c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46f33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46f340: 0x3e00008  jr          $ra
    ctx->pc = 0x46F340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F348u;
    // 0x46f348: 0x0  nop
    ctx->pc = 0x46f348u;
    // NOP
    // 0x46f34c: 0x0  nop
    ctx->pc = 0x46f34cu;
    // NOP
    ctx->pc = 0x46f350u;
}
