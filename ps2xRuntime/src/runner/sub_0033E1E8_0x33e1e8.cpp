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

// Function: sub_0033E1E8
// Address: 0x33e1e8 - 0x33e3b8
void sub_0033E1E8_0x33e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E1E8_0x33e1e8");
#endif

    switch (ctx->pc) {
        case 0x33e220u: goto label_33e220;
        case 0x33e238u: goto label_33e238;
        case 0x33e258u: goto label_33e258;
        case 0x33e260u: goto label_33e260;
        case 0x33e29cu: goto label_33e29c;
        case 0x33e2b4u: goto label_33e2b4;
        case 0x33e2d4u: goto label_33e2d4;
        case 0x33e2dcu: goto label_33e2dc;
        case 0x33e328u: goto label_33e328;
        case 0x33e340u: goto label_33e340;
        case 0x33e360u: goto label_33e360;
        case 0x33e368u: goto label_33e368;
        default: break;
    }

    ctx->pc = 0x33e1e8u;

    // 0x33e1e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33e1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33e1ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33e1f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33e1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33e1f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33e1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e1f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33e1fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33e1fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e204: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e20c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e210: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x33e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x33e214: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x33e214u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33e218: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E218u;
    SET_GPR_U32(ctx, 31, 0x33E220u);
    ctx->pc = 0x33E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E218u;
    // 0x33e21c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E218u, 0x33E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E220u;
label_33e220:
    // 0x33e220: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33E220u;
    {
        const bool branch_taken_0x33e220 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E220u;
        // 0x33e224: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e220) {
            ctx->pc = 0x33E28Cu;
            goto label_33e28c;
        }
    }
    ctx->pc = 0x33E228u;
    // 0x33e228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e22c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e230: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x33E230u;
    SET_GPR_U32(ctx, 31, 0x33E238u);
    ctx->pc = 0x33E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E230u;
    // 0x33e234: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x33E230u, 0x33E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E238u;
label_33e238:
    // 0x33e238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e23c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33E23Cu;
    {
        const bool branch_taken_0x33e23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E23Cu;
        // 0x33e240: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e23c) {
            ctx->pc = 0x33E28Cu;
            goto label_33e28c;
        }
    }
    ctx->pc = 0x33E244u;
    // 0x33e244: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33e244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33e248: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33e248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33e24c: 0x3012  mflo        $a2
    ctx->pc = 0x33e24cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e250: 0xc103454  jal         func_40D150
    ctx->pc = 0x33E250u;
    SET_GPR_U32(ctx, 31, 0x33E258u);
    ctx->pc = 0x33E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E250u;
    // 0x33e254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33E250u, 0x33E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E258u;
label_33e258:
    // 0x33e258: 0xc0d2612  jal         func_349848
    ctx->pc = 0x33E258u;
    SET_GPR_U32(ctx, 31, 0x33E260u);
    ctx->pc = 0x349848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349848u, 0x33E258u, 0x33E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E260u;
label_33e260:
    // 0x33e260: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33e260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e264: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E264u;
    {
        const bool branch_taken_0x33e264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E264u;
        // 0x33e268: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e264) {
            ctx->pc = 0x33E28Cu;
            goto label_33e28c;
        }
    }
    ctx->pc = 0x33E26Cu;
    // 0x33e26c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e270: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x33e270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x33e274: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33e274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33e278: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e27c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x33e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x33e280: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e284: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33e284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33e288: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x33e288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_33e28c:
    // 0x33e28c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e294: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E294u;
    SET_GPR_U32(ctx, 31, 0x33E29Cu);
    ctx->pc = 0x33E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E294u;
    // 0x33e298: 0x34a50003  ori         $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E294u, 0x33E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E29Cu;
label_33e29c:
    // 0x33e29c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33E29Cu;
    {
        const bool branch_taken_0x33e29c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E29Cu;
        // 0x33e2a0: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e29c) {
            ctx->pc = 0x33E318u;
            goto label_33e318;
        }
    }
    ctx->pc = 0x33E2A4u;
    // 0x33e2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e2a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e2ac: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x33E2ACu;
    SET_GPR_U32(ctx, 31, 0x33E2B4u);
    ctx->pc = 0x33E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2ACu;
    // 0x33e2b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x33E2ACu, 0x33E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2B4u;
label_33e2b4:
    // 0x33e2b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e2b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x33E2B8u;
    {
        const bool branch_taken_0x33e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2B8u;
        // 0x33e2bc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2b8) {
            ctx->pc = 0x33E318u;
            goto label_33e318;
        }
    }
    ctx->pc = 0x33E2C0u;
    // 0x33e2c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33e2c4: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33e2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33e2c8: 0x3012  mflo        $a2
    ctx->pc = 0x33e2c8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e2cc: 0xc103454  jal         func_40D150
    ctx->pc = 0x33E2CCu;
    SET_GPR_U32(ctx, 31, 0x33E2D4u);
    ctx->pc = 0x33E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2CCu;
    // 0x33e2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33E2CCu, 0x33E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2D4u;
label_33e2d4:
    // 0x33e2d4: 0xc0d2612  jal         func_349848
    ctx->pc = 0x33E2D4u;
    SET_GPR_U32(ctx, 31, 0x33E2DCu);
    ctx->pc = 0x349848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349848u, 0x33E2D4u, 0x33E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2DCu;
label_33e2dc:
    // 0x33e2dc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33e2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e2e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33E2E0u;
    {
        const bool branch_taken_0x33e2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2E0u;
        // 0x33e2e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2e0) {
            ctx->pc = 0x33E318u;
            goto label_33e318;
        }
    }
    ctx->pc = 0x33E2E8u;
    // 0x33e2e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e2ec: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x33e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x33e2f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e2f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e2f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e2fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e300: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33e300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33e304: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x33e304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33e308: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x33e308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x33e30c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33e310: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x33e310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x33e314: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x33e314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_33e318:
    // 0x33e318: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e31c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e320: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E320u;
    SET_GPR_U32(ctx, 31, 0x33E328u);
    ctx->pc = 0x33E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E320u;
    // 0x33e324: 0x34a50005  ori         $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E320u, 0x33E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E328u;
label_33e328:
    // 0x33e328: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33E328u;
    {
        const bool branch_taken_0x33e328 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E328u;
        // 0x33e32c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e328) {
            ctx->pc = 0x33E394u;
            goto label_33e394;
        }
    }
    ctx->pc = 0x33E330u;
    // 0x33e330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e338: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x33E338u;
    SET_GPR_U32(ctx, 31, 0x33E340u);
    ctx->pc = 0x33E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E338u;
    // 0x33e33c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x33E338u, 0x33E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E340u;
label_33e340:
    // 0x33e340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e344: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33E344u;
    {
        const bool branch_taken_0x33e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E344u;
        // 0x33e348: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e344) {
            ctx->pc = 0x33E394u;
            goto label_33e394;
        }
    }
    ctx->pc = 0x33E34Cu;
    // 0x33e34c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33e350: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33e350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33e354: 0x3012  mflo        $a2
    ctx->pc = 0x33e354u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e358: 0xc103454  jal         func_40D150
    ctx->pc = 0x33E358u;
    SET_GPR_U32(ctx, 31, 0x33E360u);
    ctx->pc = 0x33E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E358u;
    // 0x33e35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33E358u, 0x33E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E360u;
label_33e360:
    // 0x33e360: 0xc0d2612  jal         func_349848
    ctx->pc = 0x33E360u;
    SET_GPR_U32(ctx, 31, 0x33E368u);
    ctx->pc = 0x349848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349848u, 0x33E360u, 0x33E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E368u;
label_33e368:
    // 0x33e368: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33e368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e36c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E36Cu;
    {
        const bool branch_taken_0x33e36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E36Cu;
        // 0x33e370: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e36c) {
            ctx->pc = 0x33E394u;
            goto label_33e394;
        }
    }
    ctx->pc = 0x33E374u;
    // 0x33e374: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e378: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x33e378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x33e37c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33e380: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e384: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33e384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33e388: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e38c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33e390: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x33e390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_33e394:
    // 0x33e394: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33e394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e398: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33e398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e39c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33e39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e3a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e3a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33e3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x33E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3ACu;
        // 0x33e3b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E3B4u;
    // 0x33e3b4: 0x0  nop
    ctx->pc = 0x33e3b4u;
    // NOP
    ctx->pc = 0x33e3b8u;
}
