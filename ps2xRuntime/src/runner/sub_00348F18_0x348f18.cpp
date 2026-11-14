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

// Function: sub_00348F18
// Address: 0x348f18 - 0x348f88
void sub_00348F18_0x348f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348F18_0x348f18");
#endif

    switch (ctx->pc) {
        case 0x348f18u: goto label_348f18;
        case 0x348f1cu: goto label_348f1c;
        case 0x348f20u: goto label_348f20;
        case 0x348f24u: goto label_348f24;
        case 0x348f28u: goto label_348f28;
        case 0x348f2cu: goto label_348f2c;
        case 0x348f30u: goto label_348f30;
        case 0x348f34u: goto label_348f34;
        case 0x348f38u: goto label_348f38;
        case 0x348f3cu: goto label_348f3c;
        case 0x348f40u: goto label_348f40;
        case 0x348f44u: goto label_348f44;
        case 0x348f48u: goto label_348f48;
        case 0x348f4cu: goto label_348f4c;
        case 0x348f50u: goto label_348f50;
        case 0x348f54u: goto label_348f54;
        case 0x348f58u: goto label_348f58;
        case 0x348f5cu: goto label_348f5c;
        case 0x348f60u: goto label_348f60;
        case 0x348f64u: goto label_348f64;
        case 0x348f68u: goto label_348f68;
        case 0x348f6cu: goto label_348f6c;
        case 0x348f70u: goto label_348f70;
        case 0x348f74u: goto label_348f74;
        case 0x348f78u: goto label_348f78;
        case 0x348f7cu: goto label_348f7c;
        case 0x348f80u: goto label_348f80;
        case 0x348f84u: goto label_348f84;
        default: break;
    }

    ctx->pc = 0x348f18u;

label_348f18:
    // 0x348f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348f1c:
    // 0x348f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x348f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_348f20:
    // 0x348f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_348f24:
    // 0x348f24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x348f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_348f28:
    // 0x348f28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x348f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_348f2c:
    // 0x348f2c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_348f30:
    if (ctx->pc == 0x348F30u) {
        ctx->pc = 0x348F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F2Cu;
        // 0x348f30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F34u;
        goto label_348f34;
    }
    ctx->pc = 0x348F2Cu;
    {
        const bool branch_taken_0x348f2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x348F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F2Cu;
        // 0x348f30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f2c) {
            ctx->pc = 0x348F70u;
            goto label_348f70;
        }
    }
    ctx->pc = 0x348F34u;
label_348f34:
    // 0x348f34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x348f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_348f38:
    // 0x348f38: 0xc0d120c  jal         func_344830
label_348f3c:
    if (ctx->pc == 0x348F3Cu) {
        ctx->pc = 0x348F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F38u;
        // 0x348f3c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F40u;
        goto label_348f40;
    }
    ctx->pc = 0x348F38u;
    SET_GPR_U32(ctx, 31, 0x348F40u);
    ctx->pc = 0x348F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F38u;
    // 0x348f3c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348F38u, 0x348F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F40u;
label_348f40:
    // 0x348f40: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_348f44:
    if (ctx->pc == 0x348F44u) {
        ctx->pc = 0x348F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F40u;
        // 0x348f44: 0x2021821  addu        $v1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F48u;
        goto label_348f48;
    }
    ctx->pc = 0x348F40u;
    {
        const bool branch_taken_0x348f40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F40u;
        // 0x348f44: 0x2021821  addu        $v1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f40) {
            ctx->pc = 0x348F6Cu;
            goto label_348f6c;
        }
    }
    ctx->pc = 0x348F48u;
label_348f48:
    // 0x348f48: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x348f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_348f4c:
    // 0x348f4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_348f50:
    if (ctx->pc == 0x348F50u) {
        ctx->pc = 0x348F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F4Cu;
        // 0x348f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F54u;
        goto label_348f54;
    }
    ctx->pc = 0x348F4Cu;
    {
        const bool branch_taken_0x348f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F4Cu;
        // 0x348f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f4c) {
            ctx->pc = 0x348F74u;
            goto label_348f74;
        }
    }
    ctx->pc = 0x348F54u;
label_348f54:
    // 0x348f54: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x348f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_348f58:
    // 0x348f58: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x348f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_348f5c:
    // 0x348f5c: 0x40f809  jalr        $v0
label_348f60:
    if (ctx->pc == 0x348F60u) {
        ctx->pc = 0x348F64u;
        goto label_348f64;
    }
    ctx->pc = 0x348F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348F64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F5Cu, 0x348F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348F64u;
label_348f64:
    // 0x348f64: 0x10000002  b           . + 4 + (0x2 << 2)
label_348f68:
    if (ctx->pc == 0x348F68u) {
        ctx->pc = 0x348F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F64u;
        // 0x348f68: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F6Cu;
        goto label_348f6c;
    }
    ctx->pc = 0x348F64u;
    {
        const bool branch_taken_0x348f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F64u;
        // 0x348f68: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f64) {
            ctx->pc = 0x348F70u;
            goto label_348f70;
        }
    }
    ctx->pc = 0x348F6Cu;
label_348f6c:
    // 0x348f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x348f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348f70:
    // 0x348f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x348f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348f74:
    // 0x348f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348f78:
    // 0x348f78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x348f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_348f7c:
    // 0x348f7c: 0x3e00008  jr          $ra
label_348f80:
    if (ctx->pc == 0x348F80u) {
        ctx->pc = 0x348F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F7Cu;
        // 0x348f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F84u;
        goto label_348f84;
    }
    ctx->pc = 0x348F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F7Cu;
        // 0x348f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F84u;
label_348f84:
    // 0x348f84: 0x0  nop
    ctx->pc = 0x348f84u;
    // NOP
    ctx->pc = 0x348f88u;
}
