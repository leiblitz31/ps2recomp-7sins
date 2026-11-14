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

// Function: sub_003BB5E0
// Address: 0x3bb5e0 - 0x3bb670
void sub_003BB5E0_0x3bb5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB5E0_0x3bb5e0");
#endif

    switch (ctx->pc) {
        case 0x3bb608u: goto label_3bb608;
        case 0x3bb618u: goto label_3bb618;
        case 0x3bb628u: goto label_3bb628;
        case 0x3bb638u: goto label_3bb638;
        case 0x3bb648u: goto label_3bb648;
        case 0x3bb658u: goto label_3bb658;
        default: break;
    }

    ctx->pc = 0x3bb5e0u;

    // 0x3bb5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb5e4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3bb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3bb5e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bb5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bb5ec: 0x3484001a  ori         $a0, $a0, 0x1A
    ctx->pc = 0x3bb5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    // 0x3bb5f0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3bb5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3bb5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bb5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bb5f8: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3bb5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3bb5fc: 0xae0007d4  sw          $zero, 0x7D4($s0)
    ctx->pc = 0x3bb5fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D654u, _value); } while (0);
    // 0x3bb600: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3BB600u;
    SET_GPR_U32(ctx, 31, 0x3BB608u);
    ctx->pc = 0x3BB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB600u;
    // 0x3bb604: 0xae0007d8  sw          $zero, 0x7D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3BB600u, 0x3BB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB608u;
label_3bb608:
    // 0x3bb608: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3bb608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3bb60c: 0xae0207dc  sw          $v0, 0x7DC($s0)
    ctx->pc = 0x3bb60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 2));
    // 0x3bb610: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3BB610u;
    SET_GPR_U32(ctx, 31, 0x3BB618u);
    ctx->pc = 0x3BB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB610u;
    // 0x3bb614: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3BB610u, 0x3BB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB618u;
label_3bb618:
    // 0x3bb618: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3bb618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3bb61c: 0xae0207e0  sw          $v0, 0x7E0($s0)
    ctx->pc = 0x3bb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2016), GPR_U32(ctx, 2));
    // 0x3bb620: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3BB620u;
    SET_GPR_U32(ctx, 31, 0x3BB628u);
    ctx->pc = 0x3BB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB620u;
    // 0x3bb624: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3BB620u, 0x3BB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB628u;
label_3bb628:
    // 0x3bb628: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3bb628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3bb62c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3bb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3bb630: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3BB630u;
    SET_GPR_U32(ctx, 31, 0x3BB638u);
    ctx->pc = 0x3BB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB630u;
    // 0x3bb634: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3BB630u, 0x3BB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB638u;
label_3bb638:
    // 0x3bb638: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3bb638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3bb63c: 0xae0207f0  sw          $v0, 0x7F0($s0)
    ctx->pc = 0x3bb63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 2));
    // 0x3bb640: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3BB640u;
    SET_GPR_U32(ctx, 31, 0x3BB648u);
    ctx->pc = 0x3BB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB640u;
    // 0x3bb644: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3BB640u, 0x3BB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB648u;
label_3bb648:
    // 0x3bb648: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3bb64c: 0xae0207e4  sw          $v0, 0x7E4($s0)
    ctx->pc = 0x3bb64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2020), GPR_U32(ctx, 2));
    // 0x3bb650: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3BB650u;
    SET_GPR_U32(ctx, 31, 0x3BB658u);
    ctx->pc = 0x3BB654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB650u;
    // 0x3bb654: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3BB650u, 0x3BB658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB658u;
label_3bb658:
    // 0x3bb658: 0xae0207e8  sw          $v0, 0x7E8($s0)
    ctx->pc = 0x3bb658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 2));
    // 0x3bb65c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bb65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb668: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB668u;
        // 0x3bb66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB670u;
}
