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

// Function: sub_002F52B8
// Address: 0x2f52b8 - 0x2f5398
void sub_002F52B8_0x2f52b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52B8_0x2f52b8");
#endif

    switch (ctx->pc) {
        case 0x2f5300u: goto label_2f5300;
        case 0x2f5348u: goto label_2f5348;
        default: break;
    }

    ctx->pc = 0x2f52b8u;

    // 0x2f52b8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2f52b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f52bc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x2f52bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f52c0: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F52C0u;
    {
        const bool branch_taken_0x2f52c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52C0u;
        // 0x2f52c4: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52c0) {
            ctx->pc = 0x2F52D8u;
            goto label_2f52d8;
        }
    }
    ctx->pc = 0x2F52C8u;
    // 0x2f52c8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f52cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F52CCu;
    {
        const bool branch_taken_0x2f52cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52CCu;
        // 0x2f52d0: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52cc) {
            ctx->pc = 0x2F52DCu;
            goto label_2f52dc;
        }
    }
    ctx->pc = 0x2F52D4u;
    // 0x2f52d4: 0x0  nop
    ctx->pc = 0x2f52d4u;
    // NOP
label_2f52d8:
    // 0x2f52d8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2f52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2f52dc:
    // 0x2f52dc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2f52dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f52e0: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x2f52e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2f52e4: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x2f52e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2f52e8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2f52e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f52ec: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F52ECu;
    {
        const bool branch_taken_0x2f52ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52ECu;
        // 0x2f52f0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52ec) {
            ctx->pc = 0x2F5370u;
            goto label_2f5370;
        }
    }
    ctx->pc = 0x2F52F4u;
    // 0x2f52f4: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f52f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f52f8: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x2f52f8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f52fc: 0x0  nop
    ctx->pc = 0x2f52fcu;
    // NOP
label_2f5300:
    // 0x2f5300: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f5300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f5304: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F5304u;
    {
        const bool branch_taken_0x2f5304 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5304) {
            ctx->pc = 0x2F5308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5304u;
            // 0x2f5308: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F530Cu;
            goto label_2f530c;
        }
    }
    ctx->pc = 0x2F530Cu;
label_2f530c:
    // 0x2f530c: 0x1812  mflo        $v1
    ctx->pc = 0x2f530cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2f5310: 0x1010  mfhi        $v0
    ctx->pc = 0x2f5310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f5314: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2f5314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5318: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2f5318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2f531c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x2f531cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f5320: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2f5320u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5324: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F5324u;
    {
        const bool branch_taken_0x2f5324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5324) {
            ctx->pc = 0x2F5328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5324u;
            // 0x2f5328: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5300;
        }
    }
    ctx->pc = 0x2F532Cu;
    // 0x2f532c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f532cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f5330: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2f5330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2f5334: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x2f5334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2f5338: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F5338u;
    {
        const bool branch_taken_0x2f5338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5338u;
        // 0x2f533c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5338) {
            ctx->pc = 0x2F5388u;
            goto label_2f5388;
        }
    }
    ctx->pc = 0x2F5340u;
    // 0x2f5340: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2f5340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5344: 0x0  nop
    ctx->pc = 0x2f5344u;
    // NOP
label_2f5348:
    // 0x2f5348: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2f5348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f534c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f534cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f5350: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x2f5350u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2f5354: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2f5354u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5358: 0x0  nop
    ctx->pc = 0x2f5358u;
    // NOP
    // 0x2f535c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F535Cu;
    {
        const bool branch_taken_0x2f535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F535Cu;
        // 0x2f5360: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f535c) {
            ctx->pc = 0x2F5348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5348;
        }
    }
    ctx->pc = 0x2F5364u;
    // 0x2f5364: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5364u;
    {
        const bool branch_taken_0x2f5364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5364u;
        // 0x2f5368: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5364) {
            ctx->pc = 0x2F538Cu;
            goto label_2f538c;
        }
    }
    ctx->pc = 0x2F536Cu;
    // 0x2f536c: 0x0  nop
    ctx->pc = 0x2f536cu;
    // NOP
label_2f5370:
    // 0x2f5370: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f5374: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x2f5374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2f5378: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2f5378u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f537c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f5380: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2f5380u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f5384: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f5384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f5388:
    // 0x2f5388: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x2f5388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2f538c:
    // 0x2f538c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F538Cu;
        // 0x2f5390: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5394u;
    // 0x2f5394: 0x0  nop
    ctx->pc = 0x2f5394u;
    // NOP
    ctx->pc = 0x2f5398u;
}
