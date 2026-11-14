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

// Function: sub_004132F8
// Address: 0x4132f8 - 0x413368
void sub_004132F8_0x4132f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004132F8_0x4132f8");
#endif

    switch (ctx->pc) {
        case 0x4132f8u: goto label_4132f8;
        case 0x4132fcu: goto label_4132fc;
        case 0x413300u: goto label_413300;
        case 0x413304u: goto label_413304;
        case 0x413308u: goto label_413308;
        case 0x41330cu: goto label_41330c;
        case 0x413310u: goto label_413310;
        case 0x413314u: goto label_413314;
        case 0x413318u: goto label_413318;
        case 0x41331cu: goto label_41331c;
        case 0x413320u: goto label_413320;
        case 0x413324u: goto label_413324;
        case 0x413328u: goto label_413328;
        case 0x41332cu: goto label_41332c;
        case 0x413330u: goto label_413330;
        case 0x413334u: goto label_413334;
        case 0x413338u: goto label_413338;
        case 0x41333cu: goto label_41333c;
        case 0x413340u: goto label_413340;
        case 0x413344u: goto label_413344;
        case 0x413348u: goto label_413348;
        case 0x41334cu: goto label_41334c;
        case 0x413350u: goto label_413350;
        case 0x413354u: goto label_413354;
        case 0x413358u: goto label_413358;
        case 0x41335cu: goto label_41335c;
        case 0x413360u: goto label_413360;
        case 0x413364u: goto label_413364;
        default: break;
    }

    ctx->pc = 0x4132f8u;

label_4132f8:
    // 0x4132f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4132f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4132fc:
    // 0x4132fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4132fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_413300:
    // 0x413300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x413300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_413304:
    // 0x413304: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x413304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_413308:
    // 0x413308: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x413308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_41330c:
    // 0x41330c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_413310:
    // 0x413310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x413310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413314:
    // 0x413314: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x413314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_413318:
    // 0x413318: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x413318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_41331c:
    // 0x41331c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_413320:
    if (ctx->pc == 0x413320u) {
        ctx->pc = 0x413320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41331Cu;
        // 0x413320: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413324u;
        goto label_413324;
    }
    ctx->pc = 0x41331Cu;
    {
        const bool branch_taken_0x41331c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x413320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41331Cu;
        // 0x413320: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41331c) {
            ctx->pc = 0x413348u;
            goto label_413348;
        }
    }
    ctx->pc = 0x413324u;
label_413324:
    // 0x413324: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x413324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_413328:
    // 0x413328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x413328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41332c:
    // 0x41332c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x41332cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_413330:
    // 0x413330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x413330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_413334:
    // 0x413334: 0x40f809  jalr        $v0
label_413338:
    if (ctx->pc == 0x413338u) {
        ctx->pc = 0x413338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413334u;
        // 0x413338: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41333Cu;
        goto label_41333c;
    }
    ctx->pc = 0x413334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41333Cu);
        ctx->pc = 0x413338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413334u;
        // 0x413338: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413334u, 0x41333Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41333Cu;
label_41333c:
    // 0x41333c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x41333cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_413340:
    // 0x413340: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_413344:
    if (ctx->pc == 0x413344u) {
        ctx->pc = 0x413344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413340u;
        // 0x413344: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413348u;
        goto label_413348;
    }
    ctx->pc = 0x413340u;
    {
        const bool branch_taken_0x413340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x413340) {
            ctx->pc = 0x413344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413340u;
            // 0x413344: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413328;
        }
    }
    ctx->pc = 0x413348u;
label_413348:
    // 0x413348: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x413348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41334c:
    // 0x41334c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41334cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_413350:
    // 0x413350: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x413350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_413354:
    // 0x413354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x413354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_413358:
    // 0x413358: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x413358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41335c:
    // 0x41335c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41335cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_413360:
    // 0x413360: 0x3e00008  jr          $ra
label_413364:
    if (ctx->pc == 0x413364u) {
        ctx->pc = 0x413364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413360u;
        // 0x413364: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413368u;
        goto label_fallthrough_0x413360;
    }
    ctx->pc = 0x413360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413360u;
        // 0x413364: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x413360:
    ctx->pc = 0x413368u;
}
