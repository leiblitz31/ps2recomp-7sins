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

// Function: sub_00399FD8
// Address: 0x399fd8 - 0x39a058
void sub_00399FD8_0x399fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399FD8_0x399fd8");
#endif

    switch (ctx->pc) {
        case 0x399fd8u: goto label_399fd8;
        case 0x399fdcu: goto label_399fdc;
        case 0x399fe0u: goto label_399fe0;
        case 0x399fe4u: goto label_399fe4;
        case 0x399fe8u: goto label_399fe8;
        case 0x399fecu: goto label_399fec;
        case 0x399ff0u: goto label_399ff0;
        case 0x399ff4u: goto label_399ff4;
        case 0x399ff8u: goto label_399ff8;
        case 0x399ffcu: goto label_399ffc;
        case 0x39a000u: goto label_39a000;
        case 0x39a004u: goto label_39a004;
        case 0x39a008u: goto label_39a008;
        case 0x39a00cu: goto label_39a00c;
        case 0x39a010u: goto label_39a010;
        case 0x39a014u: goto label_39a014;
        case 0x39a018u: goto label_39a018;
        case 0x39a01cu: goto label_39a01c;
        case 0x39a020u: goto label_39a020;
        case 0x39a024u: goto label_39a024;
        case 0x39a028u: goto label_39a028;
        case 0x39a02cu: goto label_39a02c;
        case 0x39a030u: goto label_39a030;
        case 0x39a034u: goto label_39a034;
        case 0x39a038u: goto label_39a038;
        case 0x39a03cu: goto label_39a03c;
        case 0x39a040u: goto label_39a040;
        case 0x39a044u: goto label_39a044;
        case 0x39a048u: goto label_39a048;
        case 0x39a04cu: goto label_39a04c;
        case 0x39a050u: goto label_39a050;
        case 0x39a054u: goto label_39a054;
        default: break;
    }

    ctx->pc = 0x399fd8u;

label_399fd8:
    // 0x399fd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x399fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_399fdc:
    // 0x399fdc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x399fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_399fe0:
    // 0x399fe0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x399fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_399fe4:
    // 0x399fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x399fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399fe8:
    // 0x399fe8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x399fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_399fec:
    // 0x399fec: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x399fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_399ff0:
    // 0x399ff0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x399ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_399ff4:
    // 0x399ff4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x399ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_399ff8:
    // 0x399ff8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x399ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_399ffc:
    // 0x399ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a000:
    // 0x39a000: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x39a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39a004:
    // 0x39a004: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_39a008:
    if (ctx->pc == 0x39A008u) {
        ctx->pc = 0x39A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A004u;
        // 0x39a008: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A00Cu;
        goto label_39a00c;
    }
    ctx->pc = 0x39A004u;
    {
        const bool branch_taken_0x39a004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x39A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A004u;
        // 0x39a008: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a004) {
            ctx->pc = 0x39A034u;
            goto label_39a034;
        }
    }
    ctx->pc = 0x39A00Cu;
label_39a00c:
    // 0x39a00c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x39a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39a010:
    // 0x39a010: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_39a014:
    if (ctx->pc == 0x39A014u) {
        ctx->pc = 0x39A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A010u;
        // 0x39a014: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A018u;
        goto label_39a018;
    }
    ctx->pc = 0x39A010u;
    {
        const bool branch_taken_0x39a010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A010u;
        // 0x39a014: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a010) {
            ctx->pc = 0x39A028u;
            goto label_39a028;
        }
    }
    ctx->pc = 0x39A018u;
label_39a018:
    // 0x39a018: 0x280f809  jalr        $s4
label_39a01c:
    if (ctx->pc == 0x39A01Cu) {
        ctx->pc = 0x39A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A018u;
        // 0x39a01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A020u;
        goto label_39a020;
    }
    ctx->pc = 0x39A018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A020u);
        ctx->pc = 0x39A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A018u;
        // 0x39a01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A018u, 0x39A020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A020u;
label_39a020:
    // 0x39a020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39a024:
    if (ctx->pc == 0x39A024u) {
        ctx->pc = 0x39A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A020u;
        // 0x39a024: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A028u;
        goto label_39a028;
    }
    ctx->pc = 0x39A020u;
    {
        const bool branch_taken_0x39a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A020u;
        // 0x39a024: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a020) {
            ctx->pc = 0x39A038u;
            goto label_39a038;
        }
    }
    ctx->pc = 0x39A028u;
label_39a028:
    // 0x39a028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a02c:
    // 0x39a02c: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_39a030:
    if (ctx->pc == 0x39A030u) {
        ctx->pc = 0x39A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A02Cu;
        // 0x39a030: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A034u;
        goto label_39a034;
    }
    ctx->pc = 0x39A02Cu;
    {
        const bool branch_taken_0x39a02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39a02c) {
            ctx->pc = 0x39A030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A02Cu;
            // 0x39a030: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a010;
        }
    }
    ctx->pc = 0x39A034u;
label_39a034:
    // 0x39a034: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39a034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a038:
    // 0x39a038: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39a038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a03c:
    // 0x39a03c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39a03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a040:
    // 0x39a040: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39a040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a044:
    // 0x39a044: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39a044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a048:
    // 0x39a048: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39a048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a04c:
    // 0x39a04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a050:
    // 0x39a050: 0x3e00008  jr          $ra
label_39a054:
    if (ctx->pc == 0x39A054u) {
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A058u;
        goto label_fallthrough_0x39a050;
    }
    ctx->pc = 0x39A050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a050:
    ctx->pc = 0x39A058u;
}
