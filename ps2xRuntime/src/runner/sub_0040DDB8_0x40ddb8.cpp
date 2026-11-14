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

// Function: sub_0040DDB8
// Address: 0x40ddb8 - 0x40de38
void sub_0040DDB8_0x40ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DDB8_0x40ddb8");
#endif

    switch (ctx->pc) {
        case 0x40ddb8u: goto label_40ddb8;
        case 0x40ddbcu: goto label_40ddbc;
        case 0x40ddc0u: goto label_40ddc0;
        case 0x40ddc4u: goto label_40ddc4;
        case 0x40ddc8u: goto label_40ddc8;
        case 0x40ddccu: goto label_40ddcc;
        case 0x40ddd0u: goto label_40ddd0;
        case 0x40ddd4u: goto label_40ddd4;
        case 0x40ddd8u: goto label_40ddd8;
        case 0x40dddcu: goto label_40dddc;
        case 0x40dde0u: goto label_40dde0;
        case 0x40dde4u: goto label_40dde4;
        case 0x40dde8u: goto label_40dde8;
        case 0x40ddecu: goto label_40ddec;
        case 0x40ddf0u: goto label_40ddf0;
        case 0x40ddf4u: goto label_40ddf4;
        case 0x40ddf8u: goto label_40ddf8;
        case 0x40ddfcu: goto label_40ddfc;
        case 0x40de00u: goto label_40de00;
        case 0x40de04u: goto label_40de04;
        case 0x40de08u: goto label_40de08;
        case 0x40de0cu: goto label_40de0c;
        case 0x40de10u: goto label_40de10;
        case 0x40de14u: goto label_40de14;
        case 0x40de18u: goto label_40de18;
        case 0x40de1cu: goto label_40de1c;
        case 0x40de20u: goto label_40de20;
        case 0x40de24u: goto label_40de24;
        case 0x40de28u: goto label_40de28;
        case 0x40de2cu: goto label_40de2c;
        case 0x40de30u: goto label_40de30;
        case 0x40de34u: goto label_40de34;
        default: break;
    }

    ctx->pc = 0x40ddb8u;

label_40ddb8:
    // 0x40ddb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40ddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40ddbc:
    // 0x40ddbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_40ddc0:
    // 0x40ddc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40ddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_40ddc4:
    // 0x40ddc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40ddc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ddc8:
    // 0x40ddc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40ddcc:
    // 0x40ddcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40ddd0:
    // 0x40ddd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40ddd4:
    // 0x40ddd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_40ddd8:
    if (ctx->pc == 0x40DDD8u) {
        ctx->pc = 0x40DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDD4u;
        // 0x40ddd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDDCu;
        goto label_40dddc;
    }
    ctx->pc = 0x40DDD4u;
    {
        const bool branch_taken_0x40ddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDD4u;
        // 0x40ddd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ddd4) {
            ctx->pc = 0x40DDE8u;
            goto label_40dde8;
        }
    }
    ctx->pc = 0x40DDDCu;
label_40dddc:
    // 0x40dddc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x40dddcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40dde0:
    // 0x40dde0: 0x10000009  b           . + 4 + (0x9 << 2)
label_40dde4:
    if (ctx->pc == 0x40DDE4u) {
        ctx->pc = 0x40DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDE0u;
        // 0x40dde4: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDE8u;
        goto label_40dde8;
    }
    ctx->pc = 0x40DDE0u;
    {
        const bool branch_taken_0x40dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDE0u;
        // 0x40dde4: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dde0) {
            ctx->pc = 0x40DE08u;
            goto label_40de08;
        }
    }
    ctx->pc = 0x40DDE8u;
label_40dde8:
    // 0x40dde8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x40dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40ddec:
    // 0x40ddec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_40ddf0:
    if (ctx->pc == 0x40DDF0u) {
        ctx->pc = 0x40DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDECu;
        // 0x40ddf0: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDF4u;
        goto label_40ddf4;
    }
    ctx->pc = 0x40DDECu;
    {
        const bool branch_taken_0x40ddec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDECu;
        // 0x40ddf0: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ddec) {
            ctx->pc = 0x40DE08u;
            goto label_40de08;
        }
    }
    ctx->pc = 0x40DDF4u;
label_40ddf4:
    // 0x40ddf4: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x40ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_40ddf8:
    // 0x40ddf8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x40ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_40ddfc:
    // 0x40ddfc: 0x60f809  jalr        $v1
label_40de00:
    if (ctx->pc == 0x40DE00u) {
        ctx->pc = 0x40DE04u;
        goto label_40de04;
    }
    ctx->pc = 0x40DDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DE04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DDFCu, 0x40DE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DE04u;
label_40de04:
    // 0x40de04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x40de04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_40de08:
    // 0x40de08: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x40de08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_40de0c:
    // 0x40de0c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x40de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_40de10:
    // 0x40de10: 0x40f809  jalr        $v0
label_40de14:
    if (ctx->pc == 0x40DE14u) {
        ctx->pc = 0x40DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE10u;
        // 0x40de14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE18u;
        goto label_40de18;
    }
    ctx->pc = 0x40DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DE18u);
        ctx->pc = 0x40DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE10u;
        // 0x40de14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DE10u, 0x40DE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DE18u;
label_40de18:
    // 0x40de18: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x40de18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40de1c:
    // 0x40de1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40de1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40de20:
    // 0x40de20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40de20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40de24:
    // 0x40de24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40de24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40de28:
    // 0x40de28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40de28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40de2c:
    // 0x40de2c: 0x3e00008  jr          $ra
label_40de30:
    if (ctx->pc == 0x40DE30u) {
        ctx->pc = 0x40DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE2Cu;
        // 0x40de30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE34u;
        goto label_40de34;
    }
    ctx->pc = 0x40DE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE2Cu;
        // 0x40de30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DE34u;
label_40de34:
    // 0x40de34: 0x0  nop
    ctx->pc = 0x40de34u;
    // NOP
    ctx->pc = 0x40de38u;
}
