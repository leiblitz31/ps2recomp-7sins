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

// Function: sub_003FB1E0
// Address: 0x3fb1e0 - 0x3fb2c8
void sub_003FB1E0_0x3fb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB1E0_0x3fb1e0");
#endif

    switch (ctx->pc) {
        case 0x3fb224u: goto label_3fb224;
        case 0x3fb23cu: goto label_3fb23c;
        case 0x3fb24cu: goto label_3fb24c;
        case 0x3fb268u: goto label_3fb268;
        default: break;
    }

    ctx->pc = 0x3fb1e0u;

    // 0x3fb1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fb1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3fb1e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3fb1e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fb1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3fb1ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb1f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3fb1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3fb1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fb1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fb1fc: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3FB1FCu;
    {
        const bool branch_taken_0x3fb1fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB1FCu;
        // 0x3fb200: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb1fc) {
            ctx->pc = 0x3FB2B0u;
            goto label_3fb2b0;
        }
    }
    ctx->pc = 0x3FB204u;
    // 0x3fb204: 0x5200002b  beql        $s0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3FB204u;
    {
        const bool branch_taken_0x3fb204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb204) {
            ctx->pc = 0x3FB208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB204u;
            // 0x3fb208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB2B4u;
            goto label_3fb2b4;
        }
    }
    ctx->pc = 0x3FB20Cu;
    // 0x3fb20c: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x3fb20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3fb210: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FB210u;
    {
        const bool branch_taken_0x3fb210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB210u;
        // 0x3fb214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb210) {
            ctx->pc = 0x3FB22Cu;
            goto label_3fb22c;
        }
    }
    ctx->pc = 0x3FB218u;
    // 0x3fb218: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fb218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fb21c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FB21Cu;
    SET_GPR_U32(ctx, 31, 0x3FB224u);
    ctx->pc = 0x3FB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB21Cu;
    // 0x3fb220: 0x24a5f748  addiu       $a1, $a1, -0x8B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FB21Cu, 0x3FB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB224u;
label_3fb224:
    // 0x3fb224: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3FB224u;
    {
        const bool branch_taken_0x3fb224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB224u;
        // 0x3fb228: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb224) {
            ctx->pc = 0x3FB2B4u;
            goto label_3fb2b4;
        }
    }
    ctx->pc = 0x3FB22Cu;
label_3fb22c:
    // 0x3fb22c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb230: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3fb230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fb234: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3FB234u;
    SET_GPR_U32(ctx, 31, 0x3FB23Cu);
    ctx->pc = 0x3FB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB234u;
    // 0x3fb238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3FB234u, 0x3FB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB23Cu;
label_3fb23c:
    // 0x3fb23c: 0x96050024  lhu         $a1, 0x24($s0)
    ctx->pc = 0x3fb23cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3fb240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb244: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB244u;
    SET_GPR_U32(ctx, 31, 0x3FB24Cu);
    ctx->pc = 0x3FB248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB244u;
    // 0x3fb248: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB244u, 0x3FB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB24Cu;
label_3fb24c:
    // 0x3fb24c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3fb24cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fb250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb254: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x3fb254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3fb258: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3FB258u;
    {
        const bool branch_taken_0x3fb258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB258u;
        // 0x3fb25c: 0xae230298  sw          $v1, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb258) {
            ctx->pc = 0x3FB288u;
            goto label_3fb288;
        }
    }
    ctx->pc = 0x3FB260u;
    // 0x3fb260: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fb260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb264: 0x0  nop
    ctx->pc = 0x3fb264u;
    // NOP
label_3fb268:
    // 0x3fb268: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3fb268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3fb26c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3fb270: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3fb270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3fb274: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3fb274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3fb278: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x3fb278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3fb27c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3fb27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3fb280: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3FB280u;
    {
        const bool branch_taken_0x3fb280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB280u;
        // 0x3fb284: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb280) {
            ctx->pc = 0x3FB268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fb268;
        }
    }
    ctx->pc = 0x3FB288u;
label_3fb288:
    // 0x3fb288: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3fb288u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fb28c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3fb28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3fb290: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x3fb290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3fb294: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3fb294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fb298: 0x8e260298  lw          $a2, 0x298($s1)
    ctx->pc = 0x3fb298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x3fb29c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3fb29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3fb2a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3fb2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3fb2a4: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x3fb2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x3fb2a8: 0xfe0200f0  sd          $v0, 0xF0($s0)
    ctx->pc = 0x3fb2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 2));
    // 0x3fb2ac: 0xae0600a4  sw          $a2, 0xA4($s0)
    ctx->pc = 0x3fb2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 6));
label_3fb2b0:
    // 0x3fb2b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fb2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb2b4:
    // 0x3fb2b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fb2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb2b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3fb2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb2bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2C0u;
        // 0x3fb2c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB2C8u;
}
