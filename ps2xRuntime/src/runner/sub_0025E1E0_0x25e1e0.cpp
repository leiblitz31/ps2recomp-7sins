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

// Function: sub_0025E1E0
// Address: 0x25e1e0 - 0x25e340
void sub_0025E1E0_0x25e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E1E0_0x25e1e0");
#endif

    switch (ctx->pc) {
        case 0x25e214u: goto label_25e214;
        case 0x25e228u: goto label_25e228;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e274u: goto label_25e274;
        case 0x25e298u: goto label_25e298;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e300u: goto label_25e300;
        case 0x25e324u: goto label_25e324;
        default: break;
    }

    ctx->pc = 0x25e1e0u;

    // 0x25e1e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25e1e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e1e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25e1ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e1f4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25e1f8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25e1fc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x25e200: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x25e200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x25e204: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x25e204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x25e208: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e20c: 0xc097940  jal         func_25E500
    ctx->pc = 0x25E20Cu;
    SET_GPR_U32(ctx, 31, 0x25E214u);
    ctx->pc = 0x25E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E500u, 0x25E20Cu, 0x25E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E214u;
label_25e214:
    // 0x25e214: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x25e214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x25e218: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x25e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25e21c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e220: 0xc041954  jal         func_106550
    ctx->pc = 0x25E220u;
    SET_GPR_U32(ctx, 31, 0x25E228u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x25E220u, 0x25E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E228u;
label_25e228:
    // 0x25e228: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25e22c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e230: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25e230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e234: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e238: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25e238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25e23c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e244: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x25E244u;
    SET_GPR_U32(ctx, 31, 0x25E24Cu);
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x25E244u, 0x25E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E24Cu;
label_25e24c:
    // 0x25e24c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e250: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x25e250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e258: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x25e258u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e25c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e260: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25e260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e264: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25e264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e268: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x25e268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25e26c: 0xc097920  jal         func_25E480
    ctx->pc = 0x25E26Cu;
    SET_GPR_U32(ctx, 31, 0x25E274u);
    ctx->pc = 0x25E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E480u, 0x25E26Cu, 0x25E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E274u;
label_25e274:
    // 0x25e274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e278: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x25e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25e27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e280: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25E280u;
    {
        const bool branch_taken_0x25e280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e280) {
            ctx->pc = 0x25E2A4u;
            goto label_25e2a4;
        }
    }
    ctx->pc = 0x25E288u;
    // 0x25e288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e28c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e290: 0xc097950  jal         func_25E540
    ctx->pc = 0x25E290u;
    SET_GPR_U32(ctx, 31, 0x25E298u);
    ctx->pc = 0x25E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E540u, 0x25E290u, 0x25E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E298u;
label_25e298:
    // 0x25e298: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25e29c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25E29Cu;
    {
        const bool branch_taken_0x25e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e29c) {
            ctx->pc = 0x25E2C4u;
            goto label_25e2c4;
        }
    }
    ctx->pc = 0x25E2A4u;
label_25e2a4:
    // 0x25e2a4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x25e2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2ac: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x25e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25e2b0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e2b4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x25e2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x25e2b8: 0xc097900  jal         func_25E400
    ctx->pc = 0x25E2B8u;
    SET_GPR_U32(ctx, 31, 0x25E2C0u);
    ctx->pc = 0x25E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E400u, 0x25E2B8u, 0x25E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2C0u;
label_25e2c0:
    // 0x25e2c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e2c4:
    // 0x25e2c4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x25e2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25e2c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25E2C8u;
    {
        const bool branch_taken_0x25e2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e2c8) {
            ctx->pc = 0x25E2F4u;
            goto label_25e2f4;
        }
    }
    ctx->pc = 0x25E2D0u;
    // 0x25e2d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e2d4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x25e2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e2d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e2dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e2e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2e4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25e2e8: 0xc097920  jal         func_25E480
    ctx->pc = 0x25E2E8u;
    SET_GPR_U32(ctx, 31, 0x25E2F0u);
    ctx->pc = 0x25E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E480u, 0x25E2E8u, 0x25E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2F0u;
label_25e2f0:
    // 0x25e2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e2f4:
    // 0x25e2f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e2f8: 0xc0978e4  jal         func_25E390
    ctx->pc = 0x25E2F8u;
    SET_GPR_U32(ctx, 31, 0x25E300u);
    ctx->pc = 0x25E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E390u, 0x25E2F8u, 0x25E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E300u;
label_25e300:
    // 0x25e300: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25e300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e304: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e308: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x25e30c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x25e30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25e310: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e318: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e31c: 0xc0978d0  jal         func_25E340
    ctx->pc = 0x25E31Cu;
    SET_GPR_U32(ctx, 31, 0x25E324u);
    ctx->pc = 0x25E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E340u, 0x25E31Cu, 0x25E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E324u;
label_25e324:
    // 0x25e324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25e324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e334: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25e334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25e338: 0x3e00008  jr          $ra
    ctx->pc = 0x25E338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E340u;
}
