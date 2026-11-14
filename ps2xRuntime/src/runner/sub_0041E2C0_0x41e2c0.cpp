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

// Function: sub_0041E2C0
// Address: 0x41e2c0 - 0x41e4a0
void sub_0041E2C0_0x41e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E2C0_0x41e2c0");
#endif

    switch (ctx->pc) {
        case 0x41e2c0u: goto label_41e2c0;
        case 0x41e2c4u: goto label_41e2c4;
        case 0x41e2c8u: goto label_41e2c8;
        case 0x41e2ccu: goto label_41e2cc;
        case 0x41e2d0u: goto label_41e2d0;
        case 0x41e2d4u: goto label_41e2d4;
        case 0x41e2d8u: goto label_41e2d8;
        case 0x41e2dcu: goto label_41e2dc;
        case 0x41e2e0u: goto label_41e2e0;
        case 0x41e2e4u: goto label_41e2e4;
        case 0x41e2e8u: goto label_41e2e8;
        case 0x41e2ecu: goto label_41e2ec;
        case 0x41e2f0u: goto label_41e2f0;
        case 0x41e2f4u: goto label_41e2f4;
        case 0x41e2f8u: goto label_41e2f8;
        case 0x41e2fcu: goto label_41e2fc;
        case 0x41e300u: goto label_41e300;
        case 0x41e304u: goto label_41e304;
        case 0x41e308u: goto label_41e308;
        case 0x41e30cu: goto label_41e30c;
        case 0x41e310u: goto label_41e310;
        case 0x41e314u: goto label_41e314;
        case 0x41e318u: goto label_41e318;
        case 0x41e31cu: goto label_41e31c;
        case 0x41e320u: goto label_41e320;
        case 0x41e324u: goto label_41e324;
        case 0x41e328u: goto label_41e328;
        case 0x41e32cu: goto label_41e32c;
        case 0x41e330u: goto label_41e330;
        case 0x41e334u: goto label_41e334;
        case 0x41e338u: goto label_41e338;
        case 0x41e33cu: goto label_41e33c;
        case 0x41e340u: goto label_41e340;
        case 0x41e344u: goto label_41e344;
        case 0x41e348u: goto label_41e348;
        case 0x41e34cu: goto label_41e34c;
        case 0x41e350u: goto label_41e350;
        case 0x41e354u: goto label_41e354;
        case 0x41e358u: goto label_41e358;
        case 0x41e35cu: goto label_41e35c;
        case 0x41e360u: goto label_41e360;
        case 0x41e364u: goto label_41e364;
        case 0x41e368u: goto label_41e368;
        case 0x41e36cu: goto label_41e36c;
        case 0x41e370u: goto label_41e370;
        case 0x41e374u: goto label_41e374;
        case 0x41e378u: goto label_41e378;
        case 0x41e37cu: goto label_41e37c;
        case 0x41e380u: goto label_41e380;
        case 0x41e384u: goto label_41e384;
        case 0x41e388u: goto label_41e388;
        case 0x41e38cu: goto label_41e38c;
        case 0x41e390u: goto label_41e390;
        case 0x41e394u: goto label_41e394;
        case 0x41e398u: goto label_41e398;
        case 0x41e39cu: goto label_41e39c;
        case 0x41e3a0u: goto label_41e3a0;
        case 0x41e3a4u: goto label_41e3a4;
        case 0x41e3a8u: goto label_41e3a8;
        case 0x41e3acu: goto label_41e3ac;
        case 0x41e3b0u: goto label_41e3b0;
        case 0x41e3b4u: goto label_41e3b4;
        case 0x41e3b8u: goto label_41e3b8;
        case 0x41e3bcu: goto label_41e3bc;
        case 0x41e3c0u: goto label_41e3c0;
        case 0x41e3c4u: goto label_41e3c4;
        case 0x41e3c8u: goto label_41e3c8;
        case 0x41e3ccu: goto label_41e3cc;
        case 0x41e3d0u: goto label_41e3d0;
        case 0x41e3d4u: goto label_41e3d4;
        case 0x41e3d8u: goto label_41e3d8;
        case 0x41e3dcu: goto label_41e3dc;
        case 0x41e3e0u: goto label_41e3e0;
        case 0x41e3e4u: goto label_41e3e4;
        case 0x41e3e8u: goto label_41e3e8;
        case 0x41e3ecu: goto label_41e3ec;
        case 0x41e3f0u: goto label_41e3f0;
        case 0x41e3f4u: goto label_41e3f4;
        case 0x41e3f8u: goto label_41e3f8;
        case 0x41e3fcu: goto label_41e3fc;
        case 0x41e400u: goto label_41e400;
        case 0x41e404u: goto label_41e404;
        case 0x41e408u: goto label_41e408;
        case 0x41e40cu: goto label_41e40c;
        case 0x41e410u: goto label_41e410;
        case 0x41e414u: goto label_41e414;
        case 0x41e418u: goto label_41e418;
        case 0x41e41cu: goto label_41e41c;
        case 0x41e420u: goto label_41e420;
        case 0x41e424u: goto label_41e424;
        case 0x41e428u: goto label_41e428;
        case 0x41e42cu: goto label_41e42c;
        case 0x41e430u: goto label_41e430;
        case 0x41e434u: goto label_41e434;
        case 0x41e438u: goto label_41e438;
        case 0x41e43cu: goto label_41e43c;
        case 0x41e440u: goto label_41e440;
        case 0x41e444u: goto label_41e444;
        case 0x41e448u: goto label_41e448;
        case 0x41e44cu: goto label_41e44c;
        case 0x41e450u: goto label_41e450;
        case 0x41e454u: goto label_41e454;
        case 0x41e458u: goto label_41e458;
        case 0x41e45cu: goto label_41e45c;
        case 0x41e460u: goto label_41e460;
        case 0x41e464u: goto label_41e464;
        case 0x41e468u: goto label_41e468;
        case 0x41e46cu: goto label_41e46c;
        case 0x41e470u: goto label_41e470;
        case 0x41e474u: goto label_41e474;
        case 0x41e478u: goto label_41e478;
        case 0x41e47cu: goto label_41e47c;
        case 0x41e480u: goto label_41e480;
        case 0x41e484u: goto label_41e484;
        case 0x41e488u: goto label_41e488;
        case 0x41e48cu: goto label_41e48c;
        case 0x41e490u: goto label_41e490;
        case 0x41e494u: goto label_41e494;
        case 0x41e498u: goto label_41e498;
        case 0x41e49cu: goto label_41e49c;
        default: break;
    }

    ctx->pc = 0x41e2c0u;

label_41e2c0:
    // 0x41e2c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_41e2c4:
    // 0x41e2c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41e2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_41e2c8:
    // 0x41e2c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x41e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_41e2cc:
    // 0x41e2cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41e2ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e2d0:
    // 0x41e2d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_41e2d4:
    // 0x41e2d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_41e2d8:
    // 0x41e2d8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_41e2dc:
    // 0x41e2dc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x41e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_41e2e0:
    // 0x41e2e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41e2e4:
    // 0x41e2e4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x41e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_41e2e8:
    // 0x41e2e8: 0x92760003  lbu         $s6, 0x3($s3)
    ctx->pc = 0x41e2e8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_41e2ec:
    // 0x41e2ec: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x41e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_41e2f0:
    // 0x41e2f0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_41e2f4:
    if (ctx->pc == 0x41E2F4u) {
        ctx->pc = 0x41E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E2F0u;
        // 0x41e2f4: 0x32d50004  andi        $s5, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E2F8u;
        goto label_41e2f8;
    }
    ctx->pc = 0x41E2F0u;
    {
        const bool branch_taken_0x41e2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E2F0u;
        // 0x41e2f4: 0x32d50004  andi        $s5, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e2f0) {
            ctx->pc = 0x41E3DCu;
            goto label_41e3dc;
        }
    }
    ctx->pc = 0x41E2F8u;
label_41e2f8:
    // 0x41e2f8: 0x52a0000a  beql        $s5, $zero, . + 4 + (0xA << 2)
label_41e2fc:
    if (ctx->pc == 0x41E2FCu) {
        ctx->pc = 0x41E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E2F8u;
        // 0x41e2fc: 0x8e640090  lw          $a0, 0x90($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E300u;
        goto label_41e300;
    }
    ctx->pc = 0x41E2F8u;
    {
        const bool branch_taken_0x41e2f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e2f8) {
            ctx->pc = 0x41E2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E2F8u;
            // 0x41e2fc: 0x8e640090  lw          $a0, 0x90($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E324u;
            goto label_41e324;
        }
    }
    ctx->pc = 0x41E300u;
label_41e300:
    // 0x41e300: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x41e300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_41e304:
    // 0x41e304: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x41e304u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_41e308:
    // 0x41e308: 0x7a640030  lq          $a0, 0x30($s3)
    ctx->pc = 0x41e308u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_41e30c:
    // 0x41e30c: 0x7a650040  lq          $a1, 0x40($s3)
    ctx->pc = 0x41e30cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_41e310:
    // 0x41e310: 0x7e620050  sq          $v0, 0x50($s3)
    ctx->pc = 0x41e310u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 2));
label_41e314:
    // 0x41e314: 0x7e630060  sq          $v1, 0x60($s3)
    ctx->pc = 0x41e314u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), GPR_VEC(ctx, 3));
label_41e318:
    // 0x41e318: 0x7e640070  sq          $a0, 0x70($s3)
    ctx->pc = 0x41e318u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 4));
label_41e31c:
    // 0x41e31c: 0x7e650080  sq          $a1, 0x80($s3)
    ctx->pc = 0x41e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 5));
label_41e320:
    // 0x41e320: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x41e320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_41e324:
    // 0x41e324: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x41e324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_41e328:
    // 0x41e328: 0x5091000a  beql        $a0, $s1, . + 4 + (0xA << 2)
label_41e32c:
    if (ctx->pc == 0x41E32Cu) {
        ctx->pc = 0x41E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E328u;
        // 0x41e32c: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E330u;
        goto label_41e330;
    }
    ctx->pc = 0x41E328u;
    {
        const bool branch_taken_0x41e328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x41e328) {
            ctx->pc = 0x41E32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E328u;
            // 0x41e32c: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E354u;
            goto label_41e354;
        }
    }
    ctx->pc = 0x41E330u;
label_41e330:
    // 0x41e330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e334:
    // 0x41e334: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x41e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_41e338:
    // 0x41e338: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_41e33c:
    // 0x41e33c: 0x40f809  jalr        $v0
label_41e340:
    if (ctx->pc == 0x41E340u) {
        ctx->pc = 0x41E344u;
        goto label_41e344;
    }
    ctx->pc = 0x41E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E344u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E33Cu, 0x41E344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E344u;
label_41e344:
    // 0x41e344: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e348:
    // 0x41e348: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_41e34c:
    if (ctx->pc == 0x41E34Cu) {
        ctx->pc = 0x41E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E348u;
        // 0x41e34c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E350u;
        goto label_41e350;
    }
    ctx->pc = 0x41E348u;
    {
        const bool branch_taken_0x41e348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x41E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E348u;
        // 0x41e34c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e348) {
            ctx->pc = 0x41E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e338;
        }
    }
    ctx->pc = 0x41E350u;
label_41e350:
    // 0x41e350: 0x8e710098  lw          $s1, 0x98($s3)
    ctx->pc = 0x41e350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_41e354:
    // 0x41e354: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_41e358:
    if (ctx->pc == 0x41E358u) {
        ctx->pc = 0x41E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E354u;
        // 0x41e358: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E35Cu;
        goto label_41e35c;
    }
    ctx->pc = 0x41E354u;
    {
        const bool branch_taken_0x41e354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E354u;
        // 0x41e358: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e354) {
            ctx->pc = 0x41E474u;
            goto label_41e474;
        }
    }
    ctx->pc = 0x41E35Cu;
label_41e35c:
    // 0x41e35c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x41e35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41e360:
    // 0x41e360: 0x2a2a025  or          $s4, $s5, $v0
    ctx->pc = 0x41e360u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_41e364:
    // 0x41e364: 0x32830004  andi        $v1, $s4, 0x4
    ctx->pc = 0x41e364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_41e368:
    // 0x41e368: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_41e36c:
    if (ctx->pc == 0x41E36Cu) {
        ctx->pc = 0x41E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E368u;
        // 0x41e36c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E370u;
        goto label_41e370;
    }
    ctx->pc = 0x41E368u;
    {
        const bool branch_taken_0x41e368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E368u;
        // 0x41e36c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e368) {
            ctx->pc = 0x41E380u;
            goto label_41e380;
        }
    }
    ctx->pc = 0x41E370u;
label_41e370:
    // 0x41e370: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x41e370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41e374:
    // 0x41e374: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x41e374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_41e378:
    // 0x41e378: 0xc103dd4  jal         func_40F750
label_41e37c:
    if (ctx->pc == 0x41E37Cu) {
        ctx->pc = 0x41E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E378u;
        // 0x41e37c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E380u;
        goto label_41e380;
    }
    ctx->pc = 0x41E378u;
    SET_GPR_U32(ctx, 31, 0x41E380u);
    ctx->pc = 0x41E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E378u;
    // 0x41e37c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x41E378u, 0x41E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E380u;
label_41e380:
    // 0x41e380: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x41e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_41e384:
    // 0x41e384: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x41e384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_41e388:
    // 0x41e388: 0x5092000a  beql        $a0, $s2, . + 4 + (0xA << 2)
label_41e38c:
    if (ctx->pc == 0x41E38Cu) {
        ctx->pc = 0x41E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E388u;
        // 0x41e38c: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E390u;
        goto label_41e390;
    }
    ctx->pc = 0x41E388u;
    {
        const bool branch_taken_0x41e388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x41e388) {
            ctx->pc = 0x41E38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E388u;
            // 0x41e38c: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E3B4u;
            goto label_41e3b4;
        }
    }
    ctx->pc = 0x41E390u;
label_41e390:
    // 0x41e390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e394:
    // 0x41e394: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x41e394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_41e398:
    // 0x41e398: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_41e39c:
    // 0x41e39c: 0x40f809  jalr        $v0
label_41e3a0:
    if (ctx->pc == 0x41E3A0u) {
        ctx->pc = 0x41E3A4u;
        goto label_41e3a4;
    }
    ctx->pc = 0x41E39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E3A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E39Cu, 0x41E3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E3A4u;
label_41e3a4:
    // 0x41e3a4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e3a8:
    // 0x41e3a8: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_41e3ac:
    if (ctx->pc == 0x41E3ACu) {
        ctx->pc = 0x41E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3A8u;
        // 0x41e3ac: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E3B0u;
        goto label_41e3b0;
    }
    ctx->pc = 0x41E3A8u;
    {
        const bool branch_taken_0x41e3a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x41E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3A8u;
        // 0x41e3ac: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e3a8) {
            ctx->pc = 0x41E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e398;
        }
    }
    ctx->pc = 0x41E3B0u;
label_41e3b0:
    // 0x41e3b0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x41e3b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41e3b4:
    // 0x41e3b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41e3b8:
    // 0x41e3b8: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x41e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41e3bc:
    // 0x41e3bc: 0x304200f3  andi        $v0, $v0, 0xF3
    ctx->pc = 0x41e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)243);
label_41e3c0:
    // 0x41e3c0: 0xc107974  jal         func_41E5D0
label_41e3c4:
    if (ctx->pc == 0x41E3C4u) {
        ctx->pc = 0x41E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3C0u;
        // 0x41e3c4: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E3C8u;
        goto label_41e3c8;
    }
    ctx->pc = 0x41E3C0u;
    SET_GPR_U32(ctx, 31, 0x41E3C8u);
    ctx->pc = 0x41E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E3C0u;
    // 0x41e3c4: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5D0u, 0x41E3C0u, 0x41E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E3C8u;
label_41e3c8:
    // 0x41e3c8: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x41e3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41e3cc:
    // 0x41e3cc: 0x5620ffe4  bnel        $s1, $zero, . + 4 + (-0x1C << 2)
label_41e3d0:
    if (ctx->pc == 0x41E3D0u) {
        ctx->pc = 0x41E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3CCu;
        // 0x41e3d0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E3D4u;
        goto label_41e3d4;
    }
    ctx->pc = 0x41E3CCu;
    {
        const bool branch_taken_0x41e3cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e3cc) {
            ctx->pc = 0x41E3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E3CCu;
            // 0x41e3d0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e360;
        }
    }
    ctx->pc = 0x41E3D4u;
label_41e3d4:
    // 0x41e3d4: 0x10000027  b           . + 4 + (0x27 << 2)
label_41e3d8:
    if (ctx->pc == 0x41E3D8u) {
        ctx->pc = 0x41E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3D4u;
        // 0x41e3d8: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E3DCu;
        goto label_41e3dc;
    }
    ctx->pc = 0x41E3D4u;
    {
        const bool branch_taken_0x41e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3D4u;
        // 0x41e3d8: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e3d4) {
            ctx->pc = 0x41E474u;
            goto label_41e474;
        }
    }
    ctx->pc = 0x41E3DCu;
label_41e3dc:
    // 0x41e3dc: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x41e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_41e3e0:
    // 0x41e3e0: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x41e3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_41e3e4:
    // 0x41e3e4: 0x5091000b  beql        $a0, $s1, . + 4 + (0xB << 2)
label_41e3e8:
    if (ctx->pc == 0x41E3E8u) {
        ctx->pc = 0x41E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3E4u;
        // 0x41e3e8: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E3ECu;
        goto label_41e3ec;
    }
    ctx->pc = 0x41E3E4u;
    {
        const bool branch_taken_0x41e3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x41e3e4) {
            ctx->pc = 0x41E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E3E4u;
            // 0x41e3e8: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E414u;
            goto label_41e414;
        }
    }
    ctx->pc = 0x41E3ECu;
label_41e3ec:
    // 0x41e3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e3f0:
    // 0x41e3f0: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x41e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_41e3f4:
    // 0x41e3f4: 0x0  nop
    ctx->pc = 0x41e3f4u;
    // NOP
label_41e3f8:
    // 0x41e3f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_41e3fc:
    // 0x41e3fc: 0x40f809  jalr        $v0
label_41e400:
    if (ctx->pc == 0x41E400u) {
        ctx->pc = 0x41E404u;
        goto label_41e404;
    }
    ctx->pc = 0x41E3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E3FCu, 0x41E404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E404u;
label_41e404:
    // 0x41e404: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e408:
    // 0x41e408: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_41e40c:
    if (ctx->pc == 0x41E40Cu) {
        ctx->pc = 0x41E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E408u;
        // 0x41e40c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E410u;
        goto label_41e410;
    }
    ctx->pc = 0x41E408u;
    {
        const bool branch_taken_0x41e408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x41E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E408u;
        // 0x41e40c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e408) {
            ctx->pc = 0x41E3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e3f8;
        }
    }
    ctx->pc = 0x41E410u;
label_41e410:
    // 0x41e410: 0x8e710098  lw          $s1, 0x98($s3)
    ctx->pc = 0x41e410u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_41e414:
    // 0x41e414: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_41e418:
    if (ctx->pc == 0x41E418u) {
        ctx->pc = 0x41E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E414u;
        // 0x41e418: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E41Cu;
        goto label_41e41c;
    }
    ctx->pc = 0x41E414u;
    {
        const bool branch_taken_0x41e414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E414u;
        // 0x41e418: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e414) {
            ctx->pc = 0x41E474u;
            goto label_41e474;
        }
    }
    ctx->pc = 0x41E41Cu;
label_41e41c:
    // 0x41e41c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x41e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_41e420:
    // 0x41e420: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x41e420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_41e424:
    // 0x41e424: 0x5092000b  beql        $a0, $s2, . + 4 + (0xB << 2)
label_41e428:
    if (ctx->pc == 0x41E428u) {
        ctx->pc = 0x41E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E424u;
        // 0x41e428: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E42Cu;
        goto label_41e42c;
    }
    ctx->pc = 0x41E424u;
    {
        const bool branch_taken_0x41e424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x41e424) {
            ctx->pc = 0x41E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E424u;
            // 0x41e428: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E454u;
            goto label_41e454;
        }
    }
    ctx->pc = 0x41E42Cu;
label_41e42c:
    // 0x41e42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e430:
    // 0x41e430: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x41e430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_41e434:
    // 0x41e434: 0x0  nop
    ctx->pc = 0x41e434u;
    // NOP
label_41e438:
    // 0x41e438: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_41e43c:
    // 0x41e43c: 0x40f809  jalr        $v0
label_41e440:
    if (ctx->pc == 0x41E440u) {
        ctx->pc = 0x41E444u;
        goto label_41e444;
    }
    ctx->pc = 0x41E43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E43Cu, 0x41E444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E444u;
label_41e444:
    // 0x41e444: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e448:
    // 0x41e448: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_41e44c:
    if (ctx->pc == 0x41E44Cu) {
        ctx->pc = 0x41E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E448u;
        // 0x41e44c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E450u;
        goto label_41e450;
    }
    ctx->pc = 0x41E448u;
    {
        const bool branch_taken_0x41e448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x41E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E448u;
        // 0x41e44c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e448) {
            ctx->pc = 0x41E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e438;
        }
    }
    ctx->pc = 0x41E450u;
label_41e450:
    // 0x41e450: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x41e450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41e454:
    // 0x41e454: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x41e454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41e458:
    // 0x41e458: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x41e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_41e45c:
    // 0x41e45c: 0xc1079a6  jal         func_41E698
label_41e460:
    if (ctx->pc == 0x41E460u) {
        ctx->pc = 0x41E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E45Cu;
        // 0x41e460: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E464u;
        goto label_41e464;
    }
    ctx->pc = 0x41E45Cu;
    SET_GPR_U32(ctx, 31, 0x41E464u);
    ctx->pc = 0x41E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E45Cu;
    // 0x41e460: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E698u, 0x41E45Cu, 0x41E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E464u;
label_41e464:
    // 0x41e464: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x41e464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41e468:
    // 0x41e468: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_41e46c:
    if (ctx->pc == 0x41E46Cu) {
        ctx->pc = 0x41E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E468u;
        // 0x41e46c: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E470u;
        goto label_41e470;
    }
    ctx->pc = 0x41E468u;
    {
        const bool branch_taken_0x41e468 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e468) {
            ctx->pc = 0x41E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E468u;
            // 0x41e46c: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e420;
        }
    }
    ctx->pc = 0x41E470u;
label_41e470:
    // 0x41e470: 0x32c200f0  andi        $v0, $s6, 0xF0
    ctx->pc = 0x41e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
label_41e474:
    // 0x41e474: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41e474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41e478:
    // 0x41e478: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x41e478u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_41e47c:
    // 0x41e47c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41e47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41e480:
    // 0x41e480: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x41e480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41e484:
    // 0x41e484: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41e484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41e488:
    // 0x41e488: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x41e488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e48c:
    // 0x41e48c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x41e48cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e490:
    // 0x41e490: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x41e490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e494:
    // 0x41e494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41e498:
    // 0x41e498: 0x3e00008  jr          $ra
label_41e49c:
    if (ctx->pc == 0x41E49Cu) {
        ctx->pc = 0x41E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E498u;
        // 0x41e49c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E4A0u;
        goto label_fallthrough_0x41e498;
    }
    ctx->pc = 0x41E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E498u;
        // 0x41e49c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41e498:
    ctx->pc = 0x41E4A0u;
}
