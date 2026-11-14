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

// Function: sub_00440F08
// Address: 0x440f08 - 0x440f78
void sub_00440F08_0x440f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440F08_0x440f08");
#endif

    switch (ctx->pc) {
        case 0x440f08u: goto label_440f08;
        case 0x440f0cu: goto label_440f0c;
        case 0x440f10u: goto label_440f10;
        case 0x440f14u: goto label_440f14;
        case 0x440f18u: goto label_440f18;
        case 0x440f1cu: goto label_440f1c;
        case 0x440f20u: goto label_440f20;
        case 0x440f24u: goto label_440f24;
        case 0x440f28u: goto label_440f28;
        case 0x440f2cu: goto label_440f2c;
        case 0x440f30u: goto label_440f30;
        case 0x440f34u: goto label_440f34;
        case 0x440f38u: goto label_440f38;
        case 0x440f3cu: goto label_440f3c;
        case 0x440f40u: goto label_440f40;
        case 0x440f44u: goto label_440f44;
        case 0x440f48u: goto label_440f48;
        case 0x440f4cu: goto label_440f4c;
        case 0x440f50u: goto label_440f50;
        case 0x440f54u: goto label_440f54;
        case 0x440f58u: goto label_440f58;
        case 0x440f5cu: goto label_440f5c;
        case 0x440f60u: goto label_440f60;
        case 0x440f64u: goto label_440f64;
        case 0x440f68u: goto label_440f68;
        case 0x440f6cu: goto label_440f6c;
        case 0x440f70u: goto label_440f70;
        case 0x440f74u: goto label_440f74;
        default: break;
    }

    ctx->pc = 0x440f08u;

label_440f08:
    // 0x440f08: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x440f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_440f0c:
    // 0x440f0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x440f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_440f10:
    // 0x440f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x440f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_440f14:
    // 0x440f14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x440f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_440f18:
    // 0x440f18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_440f1c:
    if (ctx->pc == 0x440F1Cu) {
        ctx->pc = 0x440F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F18u;
        // 0x440f1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F20u;
        goto label_440f20;
    }
    ctx->pc = 0x440F18u;
    {
        const bool branch_taken_0x440f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F18u;
        // 0x440f1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f18) {
            ctx->pc = 0x440F2Cu;
            goto label_440f2c;
        }
    }
    ctx->pc = 0x440F20u;
label_440f20:
    // 0x440f20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_440f24:
    // 0x440f24: 0x10000003  b           . + 4 + (0x3 << 2)
label_440f28:
    if (ctx->pc == 0x440F28u) {
        ctx->pc = 0x440F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F24u;
        // 0x440f28: 0x24461668  addiu       $a2, $v0, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F2Cu;
        goto label_440f2c;
    }
    ctx->pc = 0x440F24u;
    {
        const bool branch_taken_0x440f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F24u;
        // 0x440f28: 0x24461668  addiu       $a2, $v0, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f24) {
            ctx->pc = 0x440F34u;
            goto label_440f34;
        }
    }
    ctx->pc = 0x440F2Cu;
label_440f2c:
    // 0x440f2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_440f30:
    // 0x440f30: 0x24461658  addiu       $a2, $v0, 0x1658
    ctx->pc = 0x440f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5720));
label_440f34:
    // 0x440f34: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x440f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_440f38:
    // 0x440f38: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x440f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_440f3c:
    // 0x440f3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_440f40:
    if (ctx->pc == 0x440F40u) {
        ctx->pc = 0x440F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F3Cu;
        // 0x440f40: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F44u;
        goto label_440f44;
    }
    ctx->pc = 0x440F3Cu;
    {
        const bool branch_taken_0x440f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F3Cu;
        // 0x440f40: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f3c) {
            ctx->pc = 0x440F68u;
            goto label_440f68;
        }
    }
    ctx->pc = 0x440F44u;
label_440f44:
    // 0x440f44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x440f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_440f48:
    // 0x440f48: 0x2442d770  addiu       $v0, $v0, -0x2890
    ctx->pc = 0x440f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
label_440f4c:
    // 0x440f4c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x440f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_440f50:
    // 0x440f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x440f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_440f54:
    // 0x440f54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x440f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_440f58:
    // 0x440f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x440f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_440f5c:
    // 0x440f5c: 0x40f809  jalr        $v0
label_440f60:
    if (ctx->pc == 0x440F60u) {
        ctx->pc = 0x440F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F5Cu;
        // 0x440f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F64u;
        goto label_440f64;
    }
    ctx->pc = 0x440F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x440F64u);
        ctx->pc = 0x440F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F5Cu;
        // 0x440f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440F5Cu, 0x440F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x440F64u;
label_440f64:
    // 0x440f64: 0x0  nop
    ctx->pc = 0x440f64u;
    // NOP
label_440f68:
    // 0x440f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_440f6c:
    // 0x440f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x440f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_440f70:
    // 0x440f70: 0x3e00008  jr          $ra
label_440f74:
    if (ctx->pc == 0x440F74u) {
        ctx->pc = 0x440F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F70u;
        // 0x440f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F78u;
        goto label_fallthrough_0x440f70;
    }
    ctx->pc = 0x440F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F70u;
        // 0x440f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x440f70:
    ctx->pc = 0x440F78u;
}
