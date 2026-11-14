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

// Function: sub_0038D1A8
// Address: 0x38d1a8 - 0x38d550
void sub_0038D1A8_0x38d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D1A8_0x38d1a8");
#endif

    switch (ctx->pc) {
        case 0x38d1c4u: goto label_38d1c4;
        case 0x38d1e8u: goto label_38d1e8;
        case 0x38d234u: goto label_38d234;
        case 0x38d24cu: goto label_38d24c;
        case 0x38d25cu: goto label_38d25c;
        case 0x38d274u: goto label_38d274;
        default: break;
    }

    ctx->pc = 0x38d1a8u;

    // 0x38d1a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38d1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d1ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38d1acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38d1b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38d1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d1b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38d1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d1bc: 0xc104a56  jal         func_412958
    ctx->pc = 0x38D1BCu;
    SET_GPR_U32(ctx, 31, 0x38D1C4u);
    ctx->pc = 0x38D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D1BCu;
    // 0x38d1c0: 0x2444add0  addiu       $a0, $v0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x38D1BCu, 0x38D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D1C4u;
label_38d1c4:
    // 0x38d1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x38D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1C8u;
        // 0x38d1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D1D0u;
    // 0x38d1d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38d1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d1d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38d1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38d1d8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38d1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d1e0: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x38D1E0u;
    SET_GPR_U32(ctx, 31, 0x38D1E8u);
    ctx->pc = 0x38D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D1E0u;
    // 0x38d1e4: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x38D1E0u, 0x38D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D1E8u;
label_38d1e8:
    // 0x38d1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x38D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1ECu;
        // 0x38d1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D1F4u;
    // 0x38d1f4: 0x0  nop
    ctx->pc = 0x38d1f4u;
    // NOP
    // 0x38d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1F8u;
        // 0x38d1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D200u;
    // 0x38d200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38d204: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38d204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38d208: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x38d208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x38d20c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38d210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d214: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x38d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x38d218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38d218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d21c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38d21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d220: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x38d224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38d228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38d228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d22c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x38D22Cu;
    SET_GPR_U32(ctx, 31, 0x38D234u);
    ctx->pc = 0x38D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D22Cu;
    // 0x38d230: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38D22Cu, 0x38D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D234u;
label_38d234:
    // 0x38d234: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x38D234u;
    {
        const bool branch_taken_0x38d234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D234u;
        // 0x38d238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d234) {
            ctx->pc = 0x38D288u;
            goto label_38d288;
        }
    }
    ctx->pc = 0x38D23Cu;
    // 0x38d23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38d23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d240: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x38d240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38d244: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x38D244u;
    SET_GPR_U32(ctx, 31, 0x38D24Cu);
    ctx->pc = 0x38D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D244u;
    // 0x38d248: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38D244u, 0x38D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D24Cu;
label_38d24c:
    // 0x38d24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38d250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d254: 0xc10480a  jal         func_412028
    ctx->pc = 0x38D254u;
    SET_GPR_U32(ctx, 31, 0x38D25Cu);
    ctx->pc = 0x38D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D254u;
    // 0x38d258: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38D254u, 0x38D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D25Cu;
label_38d25c:
    // 0x38d25c: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x38D25Cu;
    {
        const bool branch_taken_0x38d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D25Cu;
        // 0x38d260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d25c) {
            ctx->pc = 0x38D28Cu;
            goto label_38d28c;
        }
    }
    ctx->pc = 0x38D264u;
    // 0x38d264: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x38d264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d26c: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x38D26Cu;
    SET_GPR_U32(ctx, 31, 0x38D274u);
    ctx->pc = 0x38D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D26Cu;
    // 0x38d270: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x38D26Cu, 0x38D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D274u;
label_38d274:
    // 0x38d274: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d278: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x38d278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d27c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x38d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38d280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38D280u;
    {
        const bool branch_taken_0x38d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D280u;
        // 0x38d284: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d280) {
            ctx->pc = 0x38D28Cu;
            goto label_38d28c;
        }
    }
    ctx->pc = 0x38D288u;
label_38d288:
    // 0x38d288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d28c:
    // 0x38d28c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38d28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38d290: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38d290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38d294: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38d294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d298: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38d298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2A0u;
        // 0x38d2a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D2A8u;
    // 0x38d2a8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x38d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d2ac: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x38d2acu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x38d2b0: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x38d2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38d2b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d2b8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x38d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x38d2bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38d2c0: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x38d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x38d2c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38d2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38d2c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38d2cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x38d2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38d2d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x38D2D0u;
    {
        const bool branch_taken_0x38d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d2d0) {
            ctx->pc = 0x38D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D2D0u;
            // 0x38d2d4: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D2F0u;
            goto label_38d2f0;
        }
    }
    ctx->pc = 0x38D2D8u;
    // 0x38d2d8: 0xc78d80b0  lwc1        $f13, -0x7F50($gp)
    ctx->pc = 0x38d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38d2dc: 0x18800099  blez        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x38D2DCu;
    {
        const bool branch_taken_0x38d2dc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x38D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2DCu;
        // 0x38d2e0: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d2dc) {
            ctx->pc = 0x38D544u;
            goto label_38d544;
        }
    }
    ctx->pc = 0x38D2E4u;
    // 0x38d2e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x38d2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x38d2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38D2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2E8u;
        // 0x38d2ec: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D2F0u;
label_38d2f0:
    // 0x38d2f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38d2f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x38d2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38d2f8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x38D2F8u;
    {
        const bool branch_taken_0x38d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2F8u;
        // 0x38d2fc: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d2f8) {
            ctx->pc = 0x38D3B4u;
            goto label_38d3b4;
        }
    }
    ctx->pc = 0x38D300u;
    // 0x38d300: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x38d300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38d304: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D304u;
    {
        const bool branch_taken_0x38d304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d304) {
            ctx->pc = 0x38D308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D304u;
            // 0x38d308: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D318u;
            goto label_38d318;
        }
    }
    ctx->pc = 0x38D30Cu;
    // 0x38d30c: 0xc78d80b4  lwc1        $f13, -0x7F4C($gp)
    ctx->pc = 0x38d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38d310: 0x3e00008  jr          $ra
    ctx->pc = 0x38D310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D310u;
        // 0x38d314: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D318u;
label_38d318:
    // 0x38d318: 0xc78080b8  lwc1        $f0, -0x7F48($gp)
    ctx->pc = 0x38d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d31c: 0xc78380bc  lwc1        $f3, -0x7F44($gp)
    ctx->pc = 0x38d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38d320: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x38d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x38d324: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d328: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x38d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d32c: 0xc78280c8  lwc1        $f2, -0x7F38($gp)
    ctx->pc = 0x38d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38d330: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d334: 0xc78780cc  lwc1        $f7, -0x7F34($gp)
    ctx->pc = 0x38d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x38d338: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x38d338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x38d33c: 0xc78480d0  lwc1        $f4, -0x7F30($gp)
    ctx->pc = 0x38d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38d340: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x38d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x38d344: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x38d344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x38d348: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x38d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38d34c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d350: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x38d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x38d354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38d358: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x38d358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x38d35c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d35cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d360: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x38d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38d364: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x38d364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x38d368: 0xc78a80e4  lwc1        $f10, -0x7F1C($gp)
    ctx->pc = 0x38d368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x38d36c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x38d36cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x38d370: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d374: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d378: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x38d378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x38d37c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x38d37cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x38d380: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d384: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d388: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x38d388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x38d38c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x38d38cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x38d390: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d394: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x38d394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x38d398: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d39c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x38d39cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38d3a0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x38d3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x38d3a4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x38d3a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x38d3a8: 0x46026881  sub.s       $f2, $f13, $f2
    ctx->pc = 0x38d3a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x38d3ac: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x38D3ACu;
    {
        const bool branch_taken_0x38d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3ACu;
        // 0x38d3b0: 0x46025341  sub.s       $f13, $f10, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3ac) {
            ctx->pc = 0x38D540u;
            goto label_38d540;
        }
    }
    ctx->pc = 0x38D3B4u;
label_38d3b4:
    // 0x38d3b4: 0x481002e  bgez        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x38D3B4u;
    {
        const bool branch_taken_0x38d3b4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x38d3b4) {
            ctx->pc = 0x38D470u;
            goto label_38d470;
        }
    }
    ctx->pc = 0x38D3BCu;
    // 0x38d3bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38d3c0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x38d3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x38d3c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38d3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38d3c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x38d3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38d3cc: 0x460a6880  add.s       $f2, $f13, $f10
    ctx->pc = 0x38d3ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x38d3d0: 0xc78080b8  lwc1        $f0, -0x7F48($gp)
    ctx->pc = 0x38d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d3d4: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x38d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38d3d8: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x38d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x38d3dc: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x38d3dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x38d3e0: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x38d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d3e4: 0xc78280c8  lwc1        $f2, -0x7F38($gp)
    ctx->pc = 0x38d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38d3e8: 0xc78780cc  lwc1        $f7, -0x7F34($gp)
    ctx->pc = 0x38d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x38d3ec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d3f0: 0xc78380d0  lwc1        $f3, -0x7F30($gp)
    ctx->pc = 0x38d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38d3f4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d3f8: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x38d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x38d3fc: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x38d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x38d400: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x38d400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x38d404: 0xc78980dc  lwc1        $f9, -0x7F24($gp)
    ctx->pc = 0x38d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x38d408: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x38d408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x38d40c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d410: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d414: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x38d414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x38d418: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x38d418u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x38d41c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d420: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d424: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x38d424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x38d428: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x38d428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x38d42c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d430: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d434: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x38d434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x38d438: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x38d438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x38d43c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d440: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x38d440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x38d444: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d448: 0x460c0344  c1          0xC0344
    ctx->pc = 0x38d448u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x38d44c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x38d44cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38d450: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x38d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38d454: 0xc78380e8  lwc1        $f3, -0x7F18($gp)
    ctx->pc = 0x38d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38d458: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x38d458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x38d45c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x38d45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x38d460: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x38d460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x38d464: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38d464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x38d468: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x38D468u;
    {
        const bool branch_taken_0x38d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D468u;
        // 0x38d46c: 0x46001b41  sub.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d468) {
            ctx->pc = 0x38D540u;
            goto label_38d540;
        }
    }
    ctx->pc = 0x38D470u;
label_38d470:
    // 0x38d470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38d474: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x38d474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x38d478: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38d478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38d47c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38d47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38d480: 0x460d5801  sub.s       $f0, $f11, $f13
    ctx->pc = 0x38d480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[13]);
    // 0x38d484: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x38d484u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x38d488: 0x460c0344  c1          0xC0344
    ctx->pc = 0x38d488u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x38d48c: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x38d48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38d490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38d490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d494: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x38d498: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x38d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x38d49c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38d4a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x38d4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38d4a4: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x38d4a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x38d4a8: 0xc78080b8  lwc1        $f0, -0x7F48($gp)
    ctx->pc = 0x38d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d4ac: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x38d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38d4b0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d4b4: 0xc78a80c0  lwc1        $f10, -0x7F40($gp)
    ctx->pc = 0x38d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x38d4b8: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x38d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d4bc: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x38d4bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x38d4c0: 0xc78680c8  lwc1        $f6, -0x7F38($gp)
    ctx->pc = 0x38d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x38d4c4: 0x46056141  sub.s       $f5, $f12, $f5
    ctx->pc = 0x38d4c4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x38d4c8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x38d4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x38d4cc: 0xc78780cc  lwc1        $f7, -0x7F34($gp)
    ctx->pc = 0x38d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x38d4d0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d4d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d4d4: 0xc78480d0  lwc1        $f4, -0x7F30($gp)
    ctx->pc = 0x38d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38d4d8: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x38d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x38d4dc: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x38d4dcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x38d4e0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d4e4: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x38d4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38d4e8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x38d4e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x38d4ec: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x38d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x38d4f0: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x38d4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x38d4f4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d4f8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d4fc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x38d4fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x38d500: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x38d500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x38d504: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d508: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d50c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x38d50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x38d510: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x38d510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x38d514: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x38d514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x38d518: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d51c: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x38d51cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x38d520: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x38d520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x38d524: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38d524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38d528: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x38d528u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38d52c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x38d52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x38d530: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x38d530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x38d534: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38d534u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x38d538: 0x46021340  add.s       $f13, $f2, $f2
    ctx->pc = 0x38d538u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x38d53c: 0x0  nop
    ctx->pc = 0x38d53cu;
    // NOP
label_38d540:
    // 0x38d540: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x38d540u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
label_38d544:
    // 0x38d544: 0x3e00008  jr          $ra
    ctx->pc = 0x38D544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D54Cu;
    // 0x38d54c: 0x0  nop
    ctx->pc = 0x38d54cu;
    // NOP
    ctx->pc = 0x38d550u;
}
