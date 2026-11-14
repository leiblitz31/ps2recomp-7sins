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

// Function: sub_00348810
// Address: 0x348810 - 0x348c58
void sub_00348810_0x348810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348810_0x348810");
#endif

    switch (ctx->pc) {
        case 0x348844u: goto label_348844;
        case 0x34885cu: goto label_34885c;
        case 0x34886cu: goto label_34886c;
        case 0x34887cu: goto label_34887c;
        case 0x34888cu: goto label_34888c;
        case 0x34889cu: goto label_34889c;
        case 0x3488acu: goto label_3488ac;
        case 0x3488bcu: goto label_3488bc;
        case 0x3488ccu: goto label_3488cc;
        case 0x3488dcu: goto label_3488dc;
        case 0x3488ecu: goto label_3488ec;
        case 0x3488fcu: goto label_3488fc;
        case 0x34890cu: goto label_34890c;
        case 0x34891cu: goto label_34891c;
        case 0x34892cu: goto label_34892c;
        case 0x34893cu: goto label_34893c;
        case 0x34894cu: goto label_34894c;
        case 0x348988u: goto label_348988;
        case 0x348990u: goto label_348990;
        case 0x3489a8u: goto label_3489a8;
        case 0x3489e0u: goto label_3489e0;
        case 0x3489ecu: goto label_3489ec;
        case 0x348a08u: goto label_348a08;
        case 0x348a18u: goto label_348a18;
        case 0x348a24u: goto label_348a24;
        case 0x348a3cu: goto label_348a3c;
        case 0x348a4cu: goto label_348a4c;
        case 0x348a5cu: goto label_348a5c;
        case 0x348a6cu: goto label_348a6c;
        case 0x348a78u: goto label_348a78;
        case 0x348a90u: goto label_348a90;
        case 0x348aa0u: goto label_348aa0;
        case 0x348ab0u: goto label_348ab0;
        case 0x348ac0u: goto label_348ac0;
        case 0x348ad0u: goto label_348ad0;
        case 0x348ae0u: goto label_348ae0;
        case 0x348af0u: goto label_348af0;
        case 0x348b00u: goto label_348b00;
        case 0x348b0cu: goto label_348b0c;
        case 0x348b20u: goto label_348b20;
        case 0x348b30u: goto label_348b30;
        case 0x348b40u: goto label_348b40;
        case 0x348b50u: goto label_348b50;
        case 0x348b60u: goto label_348b60;
        case 0x348b70u: goto label_348b70;
        case 0x348b7cu: goto label_348b7c;
        case 0x348b94u: goto label_348b94;
        case 0x348ba4u: goto label_348ba4;
        case 0x348bb4u: goto label_348bb4;
        case 0x348bc4u: goto label_348bc4;
        case 0x348bd0u: goto label_348bd0;
        case 0x348be8u: goto label_348be8;
        case 0x348bf8u: goto label_348bf8;
        case 0x348c08u: goto label_348c08;
        case 0x348c18u: goto label_348c18;
        case 0x348c24u: goto label_348c24;
        case 0x348c34u: goto label_348c34;
        default: break;
    }

    ctx->pc = 0x348810u;

    // 0x348810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x348810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x348814: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x348814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x348818: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x348818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34881c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34881cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348820: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x348820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x348824: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x348824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348828: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x348828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x34882c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x348834: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x348834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x348838: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x348838u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34883c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34883Cu;
    SET_GPR_U32(ctx, 31, 0x348844u);
    ctx->pc = 0x348840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34883Cu;
    // 0x348840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34883Cu, 0x348844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348844u;
label_348844:
    // 0x348844: 0x4400074  bltz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x348844u;
    {
        const bool branch_taken_0x348844 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348844u;
        // 0x348848: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348844) {
            ctx->pc = 0x348A18u;
            goto label_348a18;
        }
    }
    ctx->pc = 0x34884Cu;
    // 0x34884c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348854: 0xc103440  jal         func_40D100
    ctx->pc = 0x348854u;
    SET_GPR_U32(ctx, 31, 0x34885Cu);
    ctx->pc = 0x348858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348854u;
    // 0x348858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x348854u, 0x34885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34885Cu;
label_34885c:
    // 0x34885c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34885cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348860: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x348860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x348864: 0xc103440  jal         func_40D100
    ctx->pc = 0x348864u;
    SET_GPR_U32(ctx, 31, 0x34886Cu);
    ctx->pc = 0x348868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348864u;
    // 0x348868: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x348864u, 0x34886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34886Cu;
label_34886c:
    // 0x34886c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348870: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348874: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348874u;
    SET_GPR_U32(ctx, 31, 0x34887Cu);
    ctx->pc = 0x348878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348874u;
    // 0x348878: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348874u, 0x34887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34887Cu;
label_34887c:
    // 0x34887c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348880: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x348880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x348884: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348884u;
    SET_GPR_U32(ctx, 31, 0x34888Cu);
    ctx->pc = 0x348888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348884u;
    // 0x348888: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348884u, 0x34888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34888Cu;
label_34888c:
    // 0x34888c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348890: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x348890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x348894: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348894u;
    SET_GPR_U32(ctx, 31, 0x34889Cu);
    ctx->pc = 0x348898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348894u;
    // 0x348898: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348894u, 0x34889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34889Cu;
label_34889c:
    // 0x34889c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488a0: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x3488a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x3488a4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3488A4u;
    SET_GPR_U32(ctx, 31, 0x3488ACu);
    ctx->pc = 0x3488A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488A4u;
    // 0x3488a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3488A4u, 0x3488ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488ACu;
label_3488ac:
    // 0x3488ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3488acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488b0: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x3488b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x3488b4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3488B4u;
    SET_GPR_U32(ctx, 31, 0x3488BCu);
    ctx->pc = 0x3488B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488B4u;
    // 0x3488b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3488B4u, 0x3488BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488BCu;
label_3488bc:
    // 0x3488bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3488bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488c0: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x3488c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x3488c4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3488C4u;
    SET_GPR_U32(ctx, 31, 0x3488CCu);
    ctx->pc = 0x3488C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488C4u;
    // 0x3488c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3488C4u, 0x3488CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488CCu;
label_3488cc:
    // 0x3488cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3488ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488d0: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x3488d4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3488D4u;
    SET_GPR_U32(ctx, 31, 0x3488DCu);
    ctx->pc = 0x3488D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488D4u;
    // 0x3488d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3488D4u, 0x3488DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488DCu;
label_3488dc:
    // 0x3488dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3488dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488e0: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x3488e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x3488e4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3488E4u;
    SET_GPR_U32(ctx, 31, 0x3488ECu);
    ctx->pc = 0x3488E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488E4u;
    // 0x3488e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3488E4u, 0x3488ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488ECu;
label_3488ec:
    // 0x3488ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3488ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488f0: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x3488f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3488f4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3488F4u;
    SET_GPR_U32(ctx, 31, 0x3488FCu);
    ctx->pc = 0x3488F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488F4u;
    // 0x3488f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3488F4u, 0x3488FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488FCu;
label_3488fc:
    // 0x3488fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3488fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348900: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x348900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x348904: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348904u;
    SET_GPR_U32(ctx, 31, 0x34890Cu);
    ctx->pc = 0x348908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348904u;
    // 0x348908: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348904u, 0x34890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34890Cu;
label_34890c:
    // 0x34890c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348910: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x348910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x348914: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348914u;
    SET_GPR_U32(ctx, 31, 0x34891Cu);
    ctx->pc = 0x348918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348914u;
    // 0x348918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348914u, 0x34891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34891Cu;
label_34891c:
    // 0x34891c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348920: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x348924: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348924u;
    SET_GPR_U32(ctx, 31, 0x34892Cu);
    ctx->pc = 0x348928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348924u;
    // 0x348928: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348924u, 0x34892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34892Cu;
label_34892c:
    // 0x34892c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348930: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x348930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x348934: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348934u;
    SET_GPR_U32(ctx, 31, 0x34893Cu);
    ctx->pc = 0x348938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348934u;
    // 0x348938: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348934u, 0x34893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34893Cu;
label_34893c:
    // 0x34893c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x34893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x348940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348944: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348944u;
    SET_GPR_U32(ctx, 31, 0x34894Cu);
    ctx->pc = 0x348948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348944u;
    // 0x348948: 0x26050074  addiu       $a1, $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348944u, 0x34894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34894Cu;
label_34894c:
    // 0x34894c: 0x9203007c  lbu         $v1, 0x7C($s0)
    ctx->pc = 0x34894cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x348950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x348950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348954: 0x9202007d  lbu         $v0, 0x7D($s0)
    ctx->pc = 0x348954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
    // 0x348958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34895c: 0x9206007e  lbu         $a2, 0x7E($s0)
    ctx->pc = 0x34895cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x348960: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x348960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x348964: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x348964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x348968: 0x9207007f  lbu         $a3, 0x7F($s0)
    ctx->pc = 0x348968u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 127)));
    // 0x34896c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x34896cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x348970: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348974: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x348974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x348978: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x348978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x34897c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x34897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348980: 0xc103440  jal         func_40D100
    ctx->pc = 0x348980u;
    SET_GPR_U32(ctx, 31, 0x348988u);
    ctx->pc = 0x348984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348980u;
    // 0x348984: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x348980u, 0x348988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348988u;
label_348988:
    // 0x348988: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x348988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x34898c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348990:
    // 0x348990: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x348990u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x348994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348998: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x348998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x34899c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3489a0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3489A0u;
    SET_GPR_U32(ctx, 31, 0x3489A8u);
    ctx->pc = 0x3489A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489A0u;
    // 0x3489a4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3489A0u, 0x3489A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489A8u;
label_3489a8:
    // 0x3489a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3489ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3489acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3489b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3489b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3489b4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3489b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3489b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3489B8u;
    {
        const bool branch_taken_0x3489b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489B8u;
        // 0x3489bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489b8) {
            ctx->pc = 0x348990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348990;
        }
    }
    ctx->pc = 0x3489C0u;
    // 0x3489c0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3489c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3489c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3489C4u;
    {
        const bool branch_taken_0x3489c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489C4u;
        // 0x3489c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489c4) {
            ctx->pc = 0x3489F4u;
            goto label_3489f4;
        }
    }
    ctx->pc = 0x3489CCu;
    // 0x3489cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3489ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3489d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3489d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3489d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3489d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3489d8: 0xc103440  jal         func_40D100
    ctx->pc = 0x3489D8u;
    SET_GPR_U32(ctx, 31, 0x3489E0u);
    ctx->pc = 0x3489DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489D8u;
    // 0x3489dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3489D8u, 0x3489E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489E0u;
label_3489e0:
    // 0x3489e0: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x3489e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3489e4: 0xc105778  jal         func_415DE0
    ctx->pc = 0x3489E4u;
    SET_GPR_U32(ctx, 31, 0x3489ECu);
    ctx->pc = 0x3489E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489E4u;
    // 0x3489e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x3489E4u, 0x3489ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489ECu;
label_3489ec:
    // 0x3489ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3489ECu;
    {
        const bool branch_taken_0x3489ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489ECu;
        // 0x3489f0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489ec) {
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x3489F4u;
label_3489f4:
    // 0x3489f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3489f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3489f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3489f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3489fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3489fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a00: 0xc103440  jal         func_40D100
    ctx->pc = 0x348A00u;
    SET_GPR_U32(ctx, 31, 0x348A08u);
    ctx->pc = 0x348A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A00u;
    // 0x348a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x348A00u, 0x348A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A08u;
label_348a08:
    // 0x348a08: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x348a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_348a0c:
    // 0x348a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a10: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A10u;
    SET_GPR_U32(ctx, 31, 0x348A18u);
    ctx->pc = 0x348A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A10u;
    // 0x348a14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A10u, 0x348A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A18u;
label_348a18:
    // 0x348a18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a1c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348A1Cu;
    SET_GPR_U32(ctx, 31, 0x348A24u);
    ctx->pc = 0x348A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A1Cu;
    // 0x348a20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348A1Cu, 0x348A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A24u;
label_348a24:
    // 0x348a24: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x348A24u;
    {
        const bool branch_taken_0x348a24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A24u;
        // 0x348a28: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a24) {
            ctx->pc = 0x348A6Cu;
            goto label_348a6c;
        }
    }
    ctx->pc = 0x348A2Cu;
    // 0x348a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a34: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A34u;
    SET_GPR_U32(ctx, 31, 0x348A3Cu);
    ctx->pc = 0x348A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A34u;
    // 0x348a38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A34u, 0x348A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A3Cu;
label_348a3c:
    // 0x348a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a40: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348a44: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A44u;
    SET_GPR_U32(ctx, 31, 0x348A4Cu);
    ctx->pc = 0x348A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A44u;
    // 0x348a48: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A44u, 0x348A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A4Cu;
label_348a4c:
    // 0x348a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a50: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x348a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x348a54: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A54u;
    SET_GPR_U32(ctx, 31, 0x348A5Cu);
    ctx->pc = 0x348A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A54u;
    // 0x348a58: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A54u, 0x348A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A5Cu;
label_348a5c:
    // 0x348a5c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x348a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x348a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a64: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A64u;
    SET_GPR_U32(ctx, 31, 0x348A6Cu);
    ctx->pc = 0x348A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A64u;
    // 0x348a68: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A64u, 0x348A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A6Cu;
label_348a6c:
    // 0x348a6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a70: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348A70u;
    SET_GPR_U32(ctx, 31, 0x348A78u);
    ctx->pc = 0x348A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A70u;
    // 0x348a74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348A70u, 0x348A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A78u;
label_348a78:
    // 0x348a78: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x348A78u;
    {
        const bool branch_taken_0x348a78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A78u;
        // 0x348a7c: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a78) {
            ctx->pc = 0x348B00u;
            goto label_348b00;
        }
    }
    ctx->pc = 0x348A80u;
    // 0x348a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a88: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A88u;
    SET_GPR_U32(ctx, 31, 0x348A90u);
    ctx->pc = 0x348A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A88u;
    // 0x348a8c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A88u, 0x348A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A90u;
label_348a90:
    // 0x348a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a94: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x348a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x348a98: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348A98u;
    SET_GPR_U32(ctx, 31, 0x348AA0u);
    ctx->pc = 0x348A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A98u;
    // 0x348a9c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348A98u, 0x348AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AA0u;
label_348aa0:
    // 0x348aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348aa4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348aa8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348AA8u;
    SET_GPR_U32(ctx, 31, 0x348AB0u);
    ctx->pc = 0x348AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AA8u;
    // 0x348aac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348AA8u, 0x348AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AB0u;
label_348ab0:
    // 0x348ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ab4: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x348ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x348ab8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348AB8u;
    SET_GPR_U32(ctx, 31, 0x348AC0u);
    ctx->pc = 0x348ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AB8u;
    // 0x348abc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348AB8u, 0x348AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AC0u;
label_348ac0:
    // 0x348ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ac4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x348ac8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348AC8u;
    SET_GPR_U32(ctx, 31, 0x348AD0u);
    ctx->pc = 0x348ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AC8u;
    // 0x348acc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348AC8u, 0x348AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AD0u;
label_348ad0:
    // 0x348ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ad4: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x348ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x348ad8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348AD8u;
    SET_GPR_U32(ctx, 31, 0x348AE0u);
    ctx->pc = 0x348ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AD8u;
    // 0x348adc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348AD8u, 0x348AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AE0u;
label_348ae0:
    // 0x348ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ae4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x348ae8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348AE8u;
    SET_GPR_U32(ctx, 31, 0x348AF0u);
    ctx->pc = 0x348AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AE8u;
    // 0x348aec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348AE8u, 0x348AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AF0u;
label_348af0:
    // 0x348af0: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x348af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x348af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348af8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348AF8u;
    SET_GPR_U32(ctx, 31, 0x348B00u);
    ctx->pc = 0x348AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AF8u;
    // 0x348afc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348AF8u, 0x348B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B00u;
label_348b00:
    // 0x348b00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b04: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348B04u;
    SET_GPR_U32(ctx, 31, 0x348B0Cu);
    ctx->pc = 0x348B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B04u;
    // 0x348b08: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348B04u, 0x348B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B0Cu;
label_348b0c:
    // 0x348b0c: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x348B0Cu;
    {
        const bool branch_taken_0x348b0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B0Cu;
        // 0x348b10: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b0c) {
            ctx->pc = 0x348B70u;
            goto label_348b70;
        }
    }
    ctx->pc = 0x348B14u;
    // 0x348b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x348b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b18: 0xc1034da  jal         func_40D368
    ctx->pc = 0x348B18u;
    SET_GPR_U32(ctx, 31, 0x348B20u);
    ctx->pc = 0x348B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B18u;
    // 0x348b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D368u, 0x348B18u, 0x348B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B20u;
label_348b20:
    // 0x348b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b24: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x348b28: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348B28u;
    SET_GPR_U32(ctx, 31, 0x348B30u);
    ctx->pc = 0x348B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B28u;
    // 0x348b2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348B28u, 0x348B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B30u;
label_348b30:
    // 0x348b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b34: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x348b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x348b38: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348B38u;
    SET_GPR_U32(ctx, 31, 0x348B40u);
    ctx->pc = 0x348B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B38u;
    // 0x348b3c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348B38u, 0x348B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B40u;
label_348b40:
    // 0x348b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b44: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x348b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x348b48: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348B48u;
    SET_GPR_U32(ctx, 31, 0x348B50u);
    ctx->pc = 0x348B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B48u;
    // 0x348b4c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348B48u, 0x348B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B50u;
label_348b50:
    // 0x348b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b54: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x348b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x348b58: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348B58u;
    SET_GPR_U32(ctx, 31, 0x348B60u);
    ctx->pc = 0x348B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B58u;
    // 0x348b5c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348B58u, 0x348B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B60u;
label_348b60:
    // 0x348b60: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x348b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x348b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b68: 0xc103440  jal         func_40D100
    ctx->pc = 0x348B68u;
    SET_GPR_U32(ctx, 31, 0x348B70u);
    ctx->pc = 0x348B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B68u;
    // 0x348b6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x348B68u, 0x348B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B70u;
label_348b70:
    // 0x348b70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b74: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348B74u;
    SET_GPR_U32(ctx, 31, 0x348B7Cu);
    ctx->pc = 0x348B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B74u;
    // 0x348b78: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348B74u, 0x348B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B7Cu;
label_348b7c:
    // 0x348b7c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x348B7Cu;
    {
        const bool branch_taken_0x348b7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B7Cu;
        // 0x348b80: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b7c) {
            ctx->pc = 0x348BC4u;
            goto label_348bc4;
        }
    }
    ctx->pc = 0x348B84u;
    // 0x348b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b8c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348B8Cu;
    SET_GPR_U32(ctx, 31, 0x348B94u);
    ctx->pc = 0x348B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B8Cu;
    // 0x348b90: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348B8Cu, 0x348B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B94u;
label_348b94:
    // 0x348b94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b98: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x348b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x348b9c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348B9Cu;
    SET_GPR_U32(ctx, 31, 0x348BA4u);
    ctx->pc = 0x348BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B9Cu;
    // 0x348ba0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348B9Cu, 0x348BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BA4u;
label_348ba4:
    // 0x348ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ba8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348bac: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348BACu;
    SET_GPR_U32(ctx, 31, 0x348BB4u);
    ctx->pc = 0x348BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BACu;
    // 0x348bb0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348BACu, 0x348BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BB4u;
label_348bb4:
    // 0x348bb4: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x348bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x348bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bbc: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348BBCu;
    SET_GPR_U32(ctx, 31, 0x348BC4u);
    ctx->pc = 0x348BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BBCu;
    // 0x348bc0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348BBCu, 0x348BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BC4u;
label_348bc4:
    // 0x348bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bc8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348BC8u;
    SET_GPR_U32(ctx, 31, 0x348BD0u);
    ctx->pc = 0x348BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BC8u;
    // 0x348bcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348BC8u, 0x348BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BD0u;
label_348bd0:
    // 0x348bd0: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x348BD0u;
    {
        const bool branch_taken_0x348bd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BD0u;
        // 0x348bd4: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bd0) {
            ctx->pc = 0x348C18u;
            goto label_348c18;
        }
    }
    ctx->pc = 0x348BD8u;
    // 0x348bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348be0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348BE0u;
    SET_GPR_U32(ctx, 31, 0x348BE8u);
    ctx->pc = 0x348BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BE0u;
    // 0x348be4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348BE0u, 0x348BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BE8u;
label_348be8:
    // 0x348be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bec: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x348becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x348bf0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348BF0u;
    SET_GPR_U32(ctx, 31, 0x348BF8u);
    ctx->pc = 0x348BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BF0u;
    // 0x348bf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348BF0u, 0x348BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BF8u;
label_348bf8:
    // 0x348bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bfc: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x348bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x348c00: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348C00u;
    SET_GPR_U32(ctx, 31, 0x348C08u);
    ctx->pc = 0x348C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C00u;
    // 0x348c04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348C00u, 0x348C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C08u;
label_348c08:
    // 0x348c08: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x348c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x348c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c10: 0xc10341a  jal         func_40D068
    ctx->pc = 0x348C10u;
    SET_GPR_U32(ctx, 31, 0x348C18u);
    ctx->pc = 0x348C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C10u;
    // 0x348c14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x348C10u, 0x348C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C18u;
label_348c18:
    // 0x348c18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c1c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348C1Cu;
    SET_GPR_U32(ctx, 31, 0x348C24u);
    ctx->pc = 0x348C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C1Cu;
    // 0x348c20: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348C1Cu, 0x348C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C24u;
label_348c24:
    // 0x348c24: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348C24u;
    {
        const bool branch_taken_0x348c24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C24u;
        // 0x348c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c24) {
            ctx->pc = 0x348C34u;
            goto label_348c34;
        }
    }
    ctx->pc = 0x348C2Cu;
    // 0x348c2c: 0xc0d151e  jal         func_345478
    ctx->pc = 0x348C2Cu;
    SET_GPR_U32(ctx, 31, 0x348C34u);
    ctx->pc = 0x348C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C2Cu;
    // 0x348c30: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345478u, 0x348C2Cu, 0x348C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C34u;
label_348c34:
    // 0x348c34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x348c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x348c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348c3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x348c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x348c40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x348c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348c44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x348c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x348C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C4Cu;
        // 0x348c50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348C54u;
    // 0x348c54: 0x0  nop
    ctx->pc = 0x348c54u;
    // NOP
    ctx->pc = 0x348c58u;
}
