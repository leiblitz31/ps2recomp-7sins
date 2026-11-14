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

// Function: sub_003082D8
// Address: 0x3082d8 - 0x308350
void sub_003082D8_0x3082d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003082D8_0x3082d8");
#endif

    switch (ctx->pc) {
        case 0x3082ecu: goto label_3082ec;
        case 0x308300u: goto label_308300;
        case 0x308324u: goto label_308324;
        case 0x30832cu: goto label_30832c;
        default: break;
    }

    ctx->pc = 0x3082d8u;

    // 0x3082d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3082d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3082dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3082dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3082e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3082e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3082e4: 0xc0c2086  jal         func_308218
    ctx->pc = 0x3082E4u;
    SET_GPR_U32(ctx, 31, 0x3082ECu);
    ctx->pc = 0x3082E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082E4u;
    // 0x3082e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308218u, 0x3082E4u, 0x3082ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082ECu;
label_3082ec:
    // 0x3082ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3082ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3082f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3082f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3082f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3082f8: 0x80bf5e0  j           func_2FD780
    ctx->pc = 0x3082F8u;
    ctx->pc = 0x3082FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082F8u;
    // 0x3082fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD780u, 0x3082F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x308300u;
label_308300:
    // 0x308300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308304: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x308304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30830c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30830cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308314: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x308314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x308318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x308318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30831c: 0xc0c2040  jal         func_308100
    ctx->pc = 0x30831Cu;
    SET_GPR_U32(ctx, 31, 0x308324u);
    ctx->pc = 0x308320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30831Cu;
    // 0x308320: 0x2484adb0  addiu       $a0, $a0, -0x5250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308100u, 0x30831Cu, 0x308324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308324u;
label_308324:
    // 0x308324: 0xc0c2086  jal         func_308218
    ctx->pc = 0x308324u;
    SET_GPR_U32(ctx, 31, 0x30832Cu);
    ctx->pc = 0x308218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308218u, 0x308324u, 0x30832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30832Cu;
label_30832c:
    // 0x30832c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x30832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308334: 0x8c450fc0  lw          $a1, 0xFC0($v0)
    ctx->pc = 0x308334u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F0FC0u));
    // 0x308338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30833c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30833cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308340: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x308340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x308344: 0x80bf7e0  j           func_2FDF80
    ctx->pc = 0x308344u;
    ctx->pc = 0x308348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308344u;
    // 0x308348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF80u, 0x308344u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x30834Cu;
    // 0x30834c: 0x0  nop
    ctx->pc = 0x30834cu;
    // NOP
    ctx->pc = 0x308350u;
}
