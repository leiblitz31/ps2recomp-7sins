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

// Function: sub_001503C0
// Address: 0x1503c0 - 0x150500
void sub_001503C0_0x1503c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001503C0_0x1503c0");
#endif

    switch (ctx->pc) {
        case 0x1503ecu: goto label_1503ec;
        case 0x1503fcu: goto label_1503fc;
        case 0x15040cu: goto label_15040c;
        case 0x150424u: goto label_150424;
        case 0x150430u: goto label_150430;
        case 0x150444u: goto label_150444;
        case 0x15045cu: goto label_15045c;
        case 0x150474u: goto label_150474;
        case 0x1504a4u: goto label_1504a4;
        case 0x1504bcu: goto label_1504bc;
        case 0x1504ccu: goto label_1504cc;
        case 0x1504d8u: goto label_1504d8;
        default: break;
    }

    ctx->pc = 0x1503c0u;

    // 0x1503c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1503c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1503c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1503c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1503c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1503c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1503cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1503ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1503d0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1503d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1503d4: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1503d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1503d8: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1503d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1503dc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1503dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1503e0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1503e4: 0xc05418c  jal         func_150630
    ctx->pc = 0x1503E4u;
    SET_GPR_U32(ctx, 31, 0x1503ECu);
    ctx->pc = 0x150630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150630u, 0x1503E4u, 0x1503ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503ECu;
label_1503ec:
    // 0x1503ec: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1503f0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1503f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1503f4: 0xc052a1c  jal         func_14A870
    ctx->pc = 0x1503F4u;
    SET_GPR_U32(ctx, 31, 0x1503FCu);
    ctx->pc = 0x14A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A870u, 0x1503F4u, 0x1503FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503FCu;
label_1503fc:
    // 0x1503fc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1503fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x150400: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x150404: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x150404u;
    SET_GPR_U32(ctx, 31, 0x15040Cu);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x150404u, 0x15040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15040Cu;
label_15040c:
    // 0x15040c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15040Cu;
    {
        const bool branch_taken_0x15040c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15040c) {
            ctx->pc = 0x15044Cu;
            goto label_15044c;
        }
    }
    ctx->pc = 0x150414u;
    // 0x150414: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x150414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x150418: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15041c: 0xc054170  jal         func_1505C0
    ctx->pc = 0x15041Cu;
    SET_GPR_U32(ctx, 31, 0x150424u);
    ctx->pc = 0x1505C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1505C0u, 0x15041Cu, 0x150424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150424u;
label_150424:
    // 0x150424: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x150424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x150428: 0xc052a64  jal         func_14A990
    ctx->pc = 0x150428u;
    SET_GPR_U32(ctx, 31, 0x150430u);
    ctx->pc = 0x14A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A990u, 0x150428u, 0x150430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150430u;
label_150430:
    // 0x150430: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x150430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x150434: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150438: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x150438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15043c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x15043Cu;
    SET_GPR_U32(ctx, 31, 0x150444u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x15043Cu, 0x150444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150444u;
label_150444:
    // 0x150444: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x150444u;
    {
        const bool branch_taken_0x150444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150444) {
            ctx->pc = 0x1504CCu;
            goto label_1504cc;
        }
    }
    ctx->pc = 0x15044Cu;
label_15044c:
    // 0x15044c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x15044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x150450: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x150450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x150454: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x150454u;
    SET_GPR_U32(ctx, 31, 0x15045Cu);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x150454u, 0x15045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15045Cu;
label_15045c:
    // 0x15045c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15045cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150460: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x150460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150464: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x150464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x150468: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150468u;
    {
        const bool branch_taken_0x150468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150468) {
            ctx->pc = 0x150490u;
            goto label_150490;
        }
    }
    ctx->pc = 0x150470u;
    // 0x150470: 0x608021  addu        $s0, $v1, $zero
    ctx->pc = 0x150470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_150474:
    // 0x150474: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x150474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x150478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15047c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x150480: 0x0  nop
    ctx->pc = 0x150480u;
    // NOP
    // 0x150484: 0x0  nop
    ctx->pc = 0x150484u;
    // NOP
    // 0x150488: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x150488u;
    {
        const bool branch_taken_0x150488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150488) {
            ctx->pc = 0x150474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150474;
        }
    }
    ctx->pc = 0x150490u;
label_150490:
    // 0x150490: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x150490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150494: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x150494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150498: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x150498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15049c: 0xc054158  jal         func_150560
    ctx->pc = 0x15049Cu;
    SET_GPR_U32(ctx, 31, 0x1504A4u);
    ctx->pc = 0x150560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150560u, 0x15049Cu, 0x1504A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504A4u;
label_1504a4:
    // 0x1504a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1504a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1504a8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1504a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1504ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1504acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1504b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504b4: 0xc054140  jal         func_150500
    ctx->pc = 0x1504B4u;
    SET_GPR_U32(ctx, 31, 0x1504BCu);
    ctx->pc = 0x150500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150500u, 0x1504B4u, 0x1504BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504BCu;
label_1504bc:
    // 0x1504bc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1504bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1504c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1504c4: 0xc052a6c  jal         func_14A9B0
    ctx->pc = 0x1504C4u;
    SET_GPR_U32(ctx, 31, 0x1504CCu);
    ctx->pc = 0x14A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9B0u, 0x1504C4u, 0x1504CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504CCu;
label_1504cc:
    // 0x1504cc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1504ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1504d0: 0xc052a64  jal         func_14A990
    ctx->pc = 0x1504D0u;
    SET_GPR_U32(ctx, 31, 0x1504D8u);
    ctx->pc = 0x14A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A990u, 0x1504D0u, 0x1504D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504D8u;
label_1504d8:
    // 0x1504d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1504d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1504dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1504dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1504e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1504e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1504e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1504e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1504e8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1504ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1504ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1504ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1504F4u;
    // 0x1504f4: 0x0  nop
    ctx->pc = 0x1504f4u;
    // NOP
    // 0x1504f8: 0x0  nop
    ctx->pc = 0x1504f8u;
    // NOP
    // 0x1504fc: 0x0  nop
    ctx->pc = 0x1504fcu;
    // NOP
    ctx->pc = 0x150500u;
}
