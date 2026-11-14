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

// Function: sub_0039A170
// Address: 0x39a170 - 0x39a250
void sub_0039A170_0x39a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A170_0x39a170");
#endif

    switch (ctx->pc) {
        case 0x39a1a8u: goto label_39a1a8;
        case 0x39a1d0u: goto label_39a1d0;
        case 0x39a1e8u: goto label_39a1e8;
        default: break;
    }

    ctx->pc = 0x39a170u;

    // 0x39a170: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x39a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x39a174: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x39a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x39a178: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x39a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x39a17c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a180: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x39a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x39a184: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x39a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x39a188: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x39a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x39a18c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x39a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x39a190: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x39a190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x39a194: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x39A194u;
    {
        const bool branch_taken_0x39a194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A194u;
        // 0x39a198: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a194) {
            ctx->pc = 0x39A1F4u;
            goto label_39a1f4;
        }
    }
    ctx->pc = 0x39A19Cu;
    // 0x39a19c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x39a19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a1a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39a1a4: 0x0  nop
    ctx->pc = 0x39a1a4u;
    // NOP
label_39a1a8:
    // 0x39a1a8: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39A1A8u;
    {
        const bool branch_taken_0x39a1a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x39A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1A8u;
        // 0x39a1ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1a8) {
            ctx->pc = 0x39A20Cu;
            goto label_39a20c;
        }
    }
    ctx->pc = 0x39A1B0u;
    // 0x39a1b0: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x39a1b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x39a1b4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x39a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x39a1b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39a1bc: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x39a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x39a1c0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39A1C0u;
    {
        const bool branch_taken_0x39a1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1C0u;
        // 0x39a1c4: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1c0) {
            ctx->pc = 0x39A1FCu;
            goto label_39a1fc;
        }
    }
    ctx->pc = 0x39A1C8u;
    // 0x39a1c8: 0xc0e3ff8  jal         func_38FFE0
    ctx->pc = 0x39A1C8u;
    SET_GPR_U32(ctx, 31, 0x39A1D0u);
    ctx->pc = 0x39A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1C8u;
    // 0x39a1cc: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x39A1C8u, 0x39A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1D0u;
label_39a1d0:
    // 0x39a1d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39A1D0u;
    {
        const bool branch_taken_0x39a1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1D0u;
        // 0x39a1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1d0) {
            ctx->pc = 0x39A1F4u;
            goto label_39a1f4;
        }
    }
    ctx->pc = 0x39A1D8u;
    // 0x39a1d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a1dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39a1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a1e0: 0xc0e63e2  jal         func_398F88
    ctx->pc = 0x39A1E0u;
    SET_GPR_U32(ctx, 31, 0x39A1E8u);
    ctx->pc = 0x39A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1E0u;
    // 0x39a1e4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398F88u, 0x39A1E0u, 0x39A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1E8u;
label_39a1e8:
    // 0x39a1e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39a1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a1ec: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A1ECu;
    {
        const bool branch_taken_0x39a1ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a1ec) {
            ctx->pc = 0x39A1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A1ECu;
            // 0x39a1f0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A200u;
            goto label_39a200;
        }
    }
    ctx->pc = 0x39A1F4u;
label_39a1f4:
    // 0x39a1f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39A1F4u;
    {
        const bool branch_taken_0x39a1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1F4u;
        // 0x39a1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1f4) {
            ctx->pc = 0x39A22Cu;
            goto label_39a22c;
        }
    }
    ctx->pc = 0x39A1FCu;
label_39a1fc:
    // 0x39a1fc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x39a1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39a200:
    // 0x39a200: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x39a200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x39a204: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39A204u;
    {
        const bool branch_taken_0x39a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A204u;
        // 0x39a208: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a204) {
            ctx->pc = 0x39A220u;
            goto label_39a220;
        }
    }
    ctx->pc = 0x39A20Cu;
label_39a20c:
    // 0x39a20c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39a20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x39a210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x39a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x39a214: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39a214u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39a218: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x39a218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a21c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x39a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_39a220:
    // 0x39a220: 0x683ffe1  bgezl       $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x39A220u;
    {
        const bool branch_taken_0x39a220 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x39a220) {
            ctx->pc = 0x39A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A220u;
            // 0x39a224: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a1a8;
        }
    }
    ctx->pc = 0x39A228u;
    // 0x39a228: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39a228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39a22c:
    // 0x39a22c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x39a22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x39a230: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x39a230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x39a234: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x39a234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x39a238: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x39a238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x39a23c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x39a23cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39a240: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x39a240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x39a244: 0x3e00008  jr          $ra
    ctx->pc = 0x39A244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A244u;
        // 0x39a248: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A24Cu;
    // 0x39a24c: 0x0  nop
    ctx->pc = 0x39a24cu;
    // NOP
    ctx->pc = 0x39a250u;
}
