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

// Function: sub_003483B0
// Address: 0x3483b0 - 0x348810
void sub_003483B0_0x3483b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003483B0_0x3483b0");
#endif

    switch (ctx->pc) {
        case 0x3483e4u: goto label_3483e4;
        case 0x3483fcu: goto label_3483fc;
        case 0x34840cu: goto label_34840c;
        case 0x34841cu: goto label_34841c;
        case 0x34842cu: goto label_34842c;
        case 0x34843cu: goto label_34843c;
        case 0x34844cu: goto label_34844c;
        case 0x34845cu: goto label_34845c;
        case 0x34846cu: goto label_34846c;
        case 0x34847cu: goto label_34847c;
        case 0x34848cu: goto label_34848c;
        case 0x34849cu: goto label_34849c;
        case 0x3484acu: goto label_3484ac;
        case 0x3484bcu: goto label_3484bc;
        case 0x3484ccu: goto label_3484cc;
        case 0x3484dcu: goto label_3484dc;
        case 0x3484ecu: goto label_3484ec;
        case 0x3484fcu: goto label_3484fc;
        case 0x348528u: goto label_348528;
        case 0x348540u: goto label_348540;
        case 0x348568u: goto label_348568;
        case 0x348584u: goto label_348584;
        case 0x348594u: goto label_348594;
        case 0x3485c0u: goto label_3485c0;
        case 0x3485ccu: goto label_3485cc;
        case 0x3485e4u: goto label_3485e4;
        case 0x3485f4u: goto label_3485f4;
        case 0x348604u: goto label_348604;
        case 0x348614u: goto label_348614;
        case 0x348620u: goto label_348620;
        case 0x348638u: goto label_348638;
        case 0x348648u: goto label_348648;
        case 0x348658u: goto label_348658;
        case 0x348668u: goto label_348668;
        case 0x348678u: goto label_348678;
        case 0x348688u: goto label_348688;
        case 0x348698u: goto label_348698;
        case 0x3486a8u: goto label_3486a8;
        case 0x3486b4u: goto label_3486b4;
        case 0x3486d0u: goto label_3486d0;
        case 0x3486dcu: goto label_3486dc;
        case 0x3486ecu: goto label_3486ec;
        case 0x3486fcu: goto label_3486fc;
        case 0x34870cu: goto label_34870c;
        case 0x34871cu: goto label_34871c;
        case 0x34872cu: goto label_34872c;
        case 0x348738u: goto label_348738;
        case 0x348750u: goto label_348750;
        case 0x348760u: goto label_348760;
        case 0x348770u: goto label_348770;
        case 0x348780u: goto label_348780;
        case 0x34878cu: goto label_34878c;
        case 0x3487a4u: goto label_3487a4;
        case 0x3487b4u: goto label_3487b4;
        case 0x3487c4u: goto label_3487c4;
        case 0x3487d4u: goto label_3487d4;
        case 0x3487e0u: goto label_3487e0;
        case 0x3487f0u: goto label_3487f0;
        default: break;
    }

    ctx->pc = 0x3483b0u;

    // 0x3483b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3483b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3483b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3483b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3483b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3483b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3483bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3483bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3483c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3483c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3483c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3483c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3483c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3483c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3483cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3483ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3483d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3483d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3483d4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3483d8: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x3483d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3483dc: 0xc0d120c  jal         func_344830
    ctx->pc = 0x3483DCu;
    SET_GPR_U32(ctx, 31, 0x3483E4u);
    ctx->pc = 0x3483E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3483DCu;
    // 0x3483e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3483DCu, 0x3483E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483E4u;
label_3483e4:
    // 0x3483e4: 0x4400076  bltz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3483E4u;
    {
        const bool branch_taken_0x3483e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3483E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483E4u;
        // 0x3483e8: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483e4) {
            ctx->pc = 0x3485C0u;
            goto label_3485c0;
        }
    }
    ctx->pc = 0x3483ECu;
    // 0x3483ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3483ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3483f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3483f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3483f4: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3483F4u;
    SET_GPR_U32(ctx, 31, 0x3483FCu);
    ctx->pc = 0x3483F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3483F4u;
    // 0x3483f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3483F4u, 0x3483FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483FCu;
label_3483fc:
    // 0x3483fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3483fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348400: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x348400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x348404: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x348404u;
    SET_GPR_U32(ctx, 31, 0x34840Cu);
    ctx->pc = 0x348408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348404u;
    // 0x348408: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x348404u, 0x34840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34840Cu;
label_34840c:
    // 0x34840c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348410: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348414: 0xc103454  jal         func_40D150
    ctx->pc = 0x348414u;
    SET_GPR_U32(ctx, 31, 0x34841Cu);
    ctx->pc = 0x348418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348414u;
    // 0x348418: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348414u, 0x34841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34841Cu;
label_34841c:
    // 0x34841c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348420: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x348420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x348424: 0xc103454  jal         func_40D150
    ctx->pc = 0x348424u;
    SET_GPR_U32(ctx, 31, 0x34842Cu);
    ctx->pc = 0x348428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348424u;
    // 0x348428: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348424u, 0x34842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34842Cu;
label_34842c:
    // 0x34842c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348430: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x348430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x348434: 0xc103454  jal         func_40D150
    ctx->pc = 0x348434u;
    SET_GPR_U32(ctx, 31, 0x34843Cu);
    ctx->pc = 0x348438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348434u;
    // 0x348438: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348434u, 0x34843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34843Cu;
label_34843c:
    // 0x34843c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348440: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x348440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x348444: 0xc103454  jal         func_40D150
    ctx->pc = 0x348444u;
    SET_GPR_U32(ctx, 31, 0x34844Cu);
    ctx->pc = 0x348448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348444u;
    // 0x348448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348444u, 0x34844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34844Cu;
label_34844c:
    // 0x34844c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348450: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x348450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x348454: 0xc103454  jal         func_40D150
    ctx->pc = 0x348454u;
    SET_GPR_U32(ctx, 31, 0x34845Cu);
    ctx->pc = 0x348458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348454u;
    // 0x348458: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348454u, 0x34845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34845Cu;
label_34845c:
    // 0x34845c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348460: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x348460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x348464: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x348464u;
    SET_GPR_U32(ctx, 31, 0x34846Cu);
    ctx->pc = 0x348468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348464u;
    // 0x348468: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x348464u, 0x34846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34846Cu;
label_34846c:
    // 0x34846c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348470: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x348470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x348474: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x348474u;
    SET_GPR_U32(ctx, 31, 0x34847Cu);
    ctx->pc = 0x348478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348474u;
    // 0x348478: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x348474u, 0x34847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34847Cu;
label_34847c:
    // 0x34847c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348480: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x348480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x348484: 0xc103454  jal         func_40D150
    ctx->pc = 0x348484u;
    SET_GPR_U32(ctx, 31, 0x34848Cu);
    ctx->pc = 0x348488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348484u;
    // 0x348488: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348484u, 0x34848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34848Cu;
label_34848c:
    // 0x34848c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348490: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x348490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x348494: 0xc103454  jal         func_40D150
    ctx->pc = 0x348494u;
    SET_GPR_U32(ctx, 31, 0x34849Cu);
    ctx->pc = 0x348498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348494u;
    // 0x348498: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348494u, 0x34849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34849Cu;
label_34849c:
    // 0x34849c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484a0: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x3484a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x3484a4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3484A4u;
    SET_GPR_U32(ctx, 31, 0x3484ACu);
    ctx->pc = 0x3484A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484A4u;
    // 0x3484a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3484A4u, 0x3484ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484ACu;
label_3484ac:
    // 0x3484ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3484acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484b0: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x3484b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3484b4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3484B4u;
    SET_GPR_U32(ctx, 31, 0x3484BCu);
    ctx->pc = 0x3484B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484B4u;
    // 0x3484b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3484B4u, 0x3484BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484BCu;
label_3484bc:
    // 0x3484bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3484bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484c0: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x3484c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x3484c4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3484C4u;
    SET_GPR_U32(ctx, 31, 0x3484CCu);
    ctx->pc = 0x3484C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484C4u;
    // 0x3484c8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3484C4u, 0x3484CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484CCu;
label_3484cc:
    // 0x3484cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3484ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484d0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3484d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x3484d4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3484D4u;
    SET_GPR_U32(ctx, 31, 0x3484DCu);
    ctx->pc = 0x3484D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484D4u;
    // 0x3484d8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3484D4u, 0x3484DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484DCu;
label_3484dc:
    // 0x3484dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3484dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484e0: 0x26050074  addiu       $a1, $s0, 0x74
    ctx->pc = 0x3484e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x3484e4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3484E4u;
    SET_GPR_U32(ctx, 31, 0x3484ECu);
    ctx->pc = 0x3484E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484E4u;
    // 0x3484e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3484E4u, 0x3484ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484ECu;
label_3484ec:
    // 0x3484ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3484ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3484f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484f4: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3484F4u;
    SET_GPR_U32(ctx, 31, 0x3484FCu);
    ctx->pc = 0x3484F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484F4u;
    // 0x3484f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3484F4u, 0x3484FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484FCu;
label_3484fc:
    // 0x3484fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3484fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348500: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x348500u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348504: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x348504u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x348508: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x348508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x34850c: 0xa204007e  sb          $a0, 0x7E($s0)
    ctx->pc = 0x34850cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 126), (uint8_t)GPR_U32(ctx, 4));
    // 0x348510: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x348510u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x348514: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x348514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x348518: 0xa203007d  sb          $v1, 0x7D($s0)
    ctx->pc = 0x348518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 3));
    // 0x34851c: 0xa205007f  sb          $a1, 0x7F($s0)
    ctx->pc = 0x34851cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 127), (uint8_t)GPR_U32(ctx, 5));
    // 0x348520: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x348520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x348524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348528:
    // 0x348528: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x348528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34852c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348530: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x348530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x348534: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x348534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x348538: 0xc103454  jal         func_40D150
    ctx->pc = 0x348538u;
    SET_GPR_U32(ctx, 31, 0x348540u);
    ctx->pc = 0x34853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348538u;
    // 0x34853c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348538u, 0x348540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348540u;
label_348540:
    // 0x348540: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x348540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x348544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x348548: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x348548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34854c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x34854cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x348550: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x348550u;
    {
        const bool branch_taken_0x348550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348550u;
        // 0x348554: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348550) {
            ctx->pc = 0x348528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348528;
        }
    }
    ctx->pc = 0x348558u;
    // 0x348558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34855c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348560: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x348560u;
    SET_GPR_U32(ctx, 31, 0x348568u);
    ctx->pc = 0x348564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348560u;
    // 0x348564: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x348560u, 0x348568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348568u;
label_348568:
    // 0x348568: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x348568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34856c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x34856Cu;
    {
        const bool branch_taken_0x34856c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x348570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34856Cu;
        // 0x348570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34856c) {
            ctx->pc = 0x348598u;
            goto label_348598;
        }
    }
    ctx->pc = 0x348574u;
    // 0x348574: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x348574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x348578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34857c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x34857Cu;
    SET_GPR_U32(ctx, 31, 0x348584u);
    ctx->pc = 0x348580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34857Cu;
    // 0x348580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x34857Cu, 0x348584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348584u;
label_348584:
    // 0x348584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348584u;
    {
        const bool branch_taken_0x348584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348584u;
        // 0x348588: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348584) {
            ctx->pc = 0x34859Cu;
            goto label_34859c;
        }
    }
    ctx->pc = 0x34858Cu;
    // 0x34858c: 0xc1057ca  jal         func_415F28
    ctx->pc = 0x34858Cu;
    SET_GPR_U32(ctx, 31, 0x348594u);
    ctx->pc = 0x348590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34858Cu;
    // 0x348590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x34858Cu, 0x348594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348594u;
label_348594:
    // 0x348594: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x348594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_348598:
    // 0x348598: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x348598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_34859c:
    // 0x34859c: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x34859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x3485a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3485a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3485a4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3485a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3485a8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3485A8u;
    {
        const bool branch_taken_0x3485a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3485ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A8u;
        // 0x3485ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485a8) {
            ctx->pc = 0x3485C4u;
            goto label_3485c4;
        }
    }
    ctx->pc = 0x3485B0u;
    // 0x3485b0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x3485b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3485b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3485b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485b8: 0xc103454  jal         func_40D150
    ctx->pc = 0x3485B8u;
    SET_GPR_U32(ctx, 31, 0x3485C0u);
    ctx->pc = 0x3485BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485B8u;
    // 0x3485bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3485B8u, 0x3485C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485C0u;
label_3485c0:
    // 0x3485c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3485c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3485c4:
    // 0x3485c4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x3485C4u;
    SET_GPR_U32(ctx, 31, 0x3485CCu);
    ctx->pc = 0x3485C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485C4u;
    // 0x3485c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3485C4u, 0x3485CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485CCu;
label_3485cc:
    // 0x3485cc: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3485CCu;
    {
        const bool branch_taken_0x3485cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3485D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485CCu;
        // 0x3485d0: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485cc) {
            ctx->pc = 0x348614u;
            goto label_348614;
        }
    }
    ctx->pc = 0x3485D4u;
    // 0x3485d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3485d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3485d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485dc: 0xc103454  jal         func_40D150
    ctx->pc = 0x3485DCu;
    SET_GPR_U32(ctx, 31, 0x3485E4u);
    ctx->pc = 0x3485E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485DCu;
    // 0x3485e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3485DCu, 0x3485E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485E4u;
label_3485e4:
    // 0x3485e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3485e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485e8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3485e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3485ec: 0xc103454  jal         func_40D150
    ctx->pc = 0x3485ECu;
    SET_GPR_U32(ctx, 31, 0x3485F4u);
    ctx->pc = 0x3485F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485ECu;
    // 0x3485f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3485ECu, 0x3485F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485F4u;
label_3485f4:
    // 0x3485f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3485f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485f8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3485f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3485fc: 0xc103454  jal         func_40D150
    ctx->pc = 0x3485FCu;
    SET_GPR_U32(ctx, 31, 0x348604u);
    ctx->pc = 0x348600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485FCu;
    // 0x348600: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3485FCu, 0x348604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348604u;
label_348604:
    // 0x348604: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x348604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x348608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34860c: 0xc103454  jal         func_40D150
    ctx->pc = 0x34860Cu;
    SET_GPR_U32(ctx, 31, 0x348614u);
    ctx->pc = 0x348610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34860Cu;
    // 0x348610: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x34860Cu, 0x348614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348614u;
label_348614:
    // 0x348614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348618: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348618u;
    SET_GPR_U32(ctx, 31, 0x348620u);
    ctx->pc = 0x34861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348618u;
    // 0x34861c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348618u, 0x348620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348620u;
label_348620:
    // 0x348620: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x348620u;
    {
        const bool branch_taken_0x348620 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348620u;
        // 0x348624: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348620) {
            ctx->pc = 0x3486A8u;
            goto label_3486a8;
        }
    }
    ctx->pc = 0x348628u;
    // 0x348628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34862c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348630: 0xc103454  jal         func_40D150
    ctx->pc = 0x348630u;
    SET_GPR_U32(ctx, 31, 0x348638u);
    ctx->pc = 0x348634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348630u;
    // 0x348634: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348630u, 0x348638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348638u;
label_348638:
    // 0x348638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34863c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x34863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x348640: 0xc103454  jal         func_40D150
    ctx->pc = 0x348640u;
    SET_GPR_U32(ctx, 31, 0x348648u);
    ctx->pc = 0x348644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348640u;
    // 0x348644: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348640u, 0x348648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348648u;
label_348648:
    // 0x348648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34864c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x34864cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348650: 0xc103454  jal         func_40D150
    ctx->pc = 0x348650u;
    SET_GPR_U32(ctx, 31, 0x348658u);
    ctx->pc = 0x348654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348650u;
    // 0x348654: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348650u, 0x348658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348658u;
label_348658:
    // 0x348658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34865c: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x34865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x348660: 0xc103454  jal         func_40D150
    ctx->pc = 0x348660u;
    SET_GPR_U32(ctx, 31, 0x348668u);
    ctx->pc = 0x348664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348660u;
    // 0x348664: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348660u, 0x348668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348668u;
label_348668:
    // 0x348668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34866c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x34866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x348670: 0xc103454  jal         func_40D150
    ctx->pc = 0x348670u;
    SET_GPR_U32(ctx, 31, 0x348678u);
    ctx->pc = 0x348674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348670u;
    // 0x348674: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348670u, 0x348678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348678u;
label_348678:
    // 0x348678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34867c: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x34867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x348680: 0xc103454  jal         func_40D150
    ctx->pc = 0x348680u;
    SET_GPR_U32(ctx, 31, 0x348688u);
    ctx->pc = 0x348684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348680u;
    // 0x348684: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348680u, 0x348688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348688u;
label_348688:
    // 0x348688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34868c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x34868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x348690: 0xc103454  jal         func_40D150
    ctx->pc = 0x348690u;
    SET_GPR_U32(ctx, 31, 0x348698u);
    ctx->pc = 0x348694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348690u;
    // 0x348694: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348690u, 0x348698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348698u;
label_348698:
    // 0x348698: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x348698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x34869c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486a0: 0xc103454  jal         func_40D150
    ctx->pc = 0x3486A0u;
    SET_GPR_U32(ctx, 31, 0x3486A8u);
    ctx->pc = 0x3486A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486A0u;
    // 0x3486a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3486A0u, 0x3486A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486A8u;
label_3486a8:
    // 0x3486a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3486a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486ac: 0xc0d120c  jal         func_344830
    ctx->pc = 0x3486ACu;
    SET_GPR_U32(ctx, 31, 0x3486B4u);
    ctx->pc = 0x3486B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486ACu;
    // 0x3486b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3486ACu, 0x3486B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486B4u;
label_3486b4:
    // 0x3486b4: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3486B4u;
    {
        const bool branch_taken_0x3486b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486B4u;
        // 0x3486b8: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486b4) {
            ctx->pc = 0x34872Cu;
            goto label_34872c;
        }
    }
    ctx->pc = 0x3486BCu;
    // 0x3486bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3486bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3486c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3486c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486c8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3486C8u;
    SET_GPR_U32(ctx, 31, 0x3486D0u);
    ctx->pc = 0x3486CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486C8u;
    // 0x3486cc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3486C8u, 0x3486D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486D0u;
label_3486d0:
    // 0x3486d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3486d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486d4: 0xc103548  jal         func_40D520
    ctx->pc = 0x3486D4u;
    SET_GPR_U32(ctx, 31, 0x3486DCu);
    ctx->pc = 0x3486D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486D4u;
    // 0x3486d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D520u, 0x3486D4u, 0x3486DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486DCu;
label_3486dc:
    // 0x3486dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3486dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486e0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3486e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3486e4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3486E4u;
    SET_GPR_U32(ctx, 31, 0x3486ECu);
    ctx->pc = 0x3486E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486E4u;
    // 0x3486e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3486E4u, 0x3486ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486ECu;
label_3486ec:
    // 0x3486ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3486ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486f0: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x3486f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x3486f4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3486F4u;
    SET_GPR_U32(ctx, 31, 0x3486FCu);
    ctx->pc = 0x3486F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486F4u;
    // 0x3486f8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3486F4u, 0x3486FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486FCu;
label_3486fc:
    // 0x3486fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3486fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348700: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x348700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x348704: 0xc103454  jal         func_40D150
    ctx->pc = 0x348704u;
    SET_GPR_U32(ctx, 31, 0x34870Cu);
    ctx->pc = 0x348708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348704u;
    // 0x348708: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348704u, 0x34870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34870Cu;
label_34870c:
    // 0x34870c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348710: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x348710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x348714: 0xc103454  jal         func_40D150
    ctx->pc = 0x348714u;
    SET_GPR_U32(ctx, 31, 0x34871Cu);
    ctx->pc = 0x348718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348714u;
    // 0x348718: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348714u, 0x34871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34871Cu;
label_34871c:
    // 0x34871c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x34871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x348720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348724: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x348724u;
    SET_GPR_U32(ctx, 31, 0x34872Cu);
    ctx->pc = 0x348728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348724u;
    // 0x348728: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x348724u, 0x34872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34872Cu;
label_34872c:
    // 0x34872c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348730: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348730u;
    SET_GPR_U32(ctx, 31, 0x348738u);
    ctx->pc = 0x348734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348730u;
    // 0x348734: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348730u, 0x348738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348738u;
label_348738:
    // 0x348738: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x348738u;
    {
        const bool branch_taken_0x348738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348738u;
        // 0x34873c: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348738) {
            ctx->pc = 0x348780u;
            goto label_348780;
        }
    }
    ctx->pc = 0x348740u;
    // 0x348740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348748: 0xc103454  jal         func_40D150
    ctx->pc = 0x348748u;
    SET_GPR_U32(ctx, 31, 0x348750u);
    ctx->pc = 0x34874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348748u;
    // 0x34874c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348748u, 0x348750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348750u;
label_348750:
    // 0x348750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348754: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x348754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x348758: 0xc103454  jal         func_40D150
    ctx->pc = 0x348758u;
    SET_GPR_U32(ctx, 31, 0x348760u);
    ctx->pc = 0x34875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348758u;
    // 0x34875c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348758u, 0x348760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348760u;
label_348760:
    // 0x348760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348764: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348768: 0xc103454  jal         func_40D150
    ctx->pc = 0x348768u;
    SET_GPR_U32(ctx, 31, 0x348770u);
    ctx->pc = 0x34876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348768u;
    // 0x34876c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348768u, 0x348770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348770u;
label_348770:
    // 0x348770: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x348770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x348774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348778: 0xc103454  jal         func_40D150
    ctx->pc = 0x348778u;
    SET_GPR_U32(ctx, 31, 0x348780u);
    ctx->pc = 0x34877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348778u;
    // 0x34877c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x348778u, 0x348780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348780u;
label_348780:
    // 0x348780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348784: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348784u;
    SET_GPR_U32(ctx, 31, 0x34878Cu);
    ctx->pc = 0x348788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348784u;
    // 0x348788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348784u, 0x34878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34878Cu;
label_34878c:
    // 0x34878c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34878Cu;
    {
        const bool branch_taken_0x34878c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34878Cu;
        // 0x348790: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34878c) {
            ctx->pc = 0x3487D4u;
            goto label_3487d4;
        }
    }
    ctx->pc = 0x348794u;
    // 0x348794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34879c: 0xc103454  jal         func_40D150
    ctx->pc = 0x34879Cu;
    SET_GPR_U32(ctx, 31, 0x3487A4u);
    ctx->pc = 0x3487A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34879Cu;
    // 0x3487a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x34879Cu, 0x3487A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487A4u;
label_3487a4:
    // 0x3487a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3487a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487a8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3487a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3487ac: 0xc103454  jal         func_40D150
    ctx->pc = 0x3487ACu;
    SET_GPR_U32(ctx, 31, 0x3487B4u);
    ctx->pc = 0x3487B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487ACu;
    // 0x3487b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3487ACu, 0x3487B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487B4u;
label_3487b4:
    // 0x3487b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3487b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487b8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3487b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3487bc: 0xc103454  jal         func_40D150
    ctx->pc = 0x3487BCu;
    SET_GPR_U32(ctx, 31, 0x3487C4u);
    ctx->pc = 0x3487C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487BCu;
    // 0x3487c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3487BCu, 0x3487C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487C4u;
label_3487c4:
    // 0x3487c4: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x3487c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3487c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3487c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487cc: 0xc103454  jal         func_40D150
    ctx->pc = 0x3487CCu;
    SET_GPR_U32(ctx, 31, 0x3487D4u);
    ctx->pc = 0x3487D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487CCu;
    // 0x3487d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3487CCu, 0x3487D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487D4u;
label_3487d4:
    // 0x3487d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3487d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487d8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x3487D8u;
    SET_GPR_U32(ctx, 31, 0x3487E0u);
    ctx->pc = 0x3487DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487D8u;
    // 0x3487dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3487D8u, 0x3487E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487E0u;
label_3487e0:
    // 0x3487e0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3487E0u;
    {
        const bool branch_taken_0x3487e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3487E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487E0u;
        // 0x3487e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3487e0) {
            ctx->pc = 0x3487F0u;
            goto label_3487f0;
        }
    }
    ctx->pc = 0x3487E8u;
    // 0x3487e8: 0xc0d14fe  jal         func_3453F8
    ctx->pc = 0x3487E8u;
    SET_GPR_U32(ctx, 31, 0x3487F0u);
    ctx->pc = 0x3487ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487E8u;
    // 0x3487ec: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3453F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3453F8u, 0x3487E8u, 0x3487F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487F0u;
label_3487f0:
    // 0x3487f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3487f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3487f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3487f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3487f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3487fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3487fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348800: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x348800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348808: 0x3e00008  jr          $ra
    ctx->pc = 0x348808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348808u;
        // 0x34880c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348810u;
}
