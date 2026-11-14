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

// Function: sub_00327BE0
// Address: 0x327be0 - 0x327cf0
void sub_00327BE0_0x327be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327BE0_0x327be0");
#endif

    switch (ctx->pc) {
        case 0x327c18u: goto label_327c18;
        case 0x327c30u: goto label_327c30;
        case 0x327c38u: goto label_327c38;
        case 0x327c58u: goto label_327c58;
        case 0x327c68u: goto label_327c68;
        default: break;
    }

    ctx->pc = 0x327be0u;

    // 0x327be0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x327be4: 0x8f82a654  lw          $v0, -0x59AC($gp)
    ctx->pc = 0x327be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
    // 0x327be8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x327be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x327bec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x327becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327bf0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x327bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x327bf4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x327bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327bf8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x327bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x327bfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x327c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x327c04: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x327c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x327c08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x327c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x327c0c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x327c0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x327c10: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x327C10u;
    SET_GPR_U32(ctx, 31, 0x327C18u);
    ctx->pc = 0x327C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C10u;
    // 0x327c14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x327C10u, 0x327C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C18u;
label_327c18:
    // 0x327c18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x327C18u;
    {
        const bool branch_taken_0x327c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C18u;
        // 0x327c1c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c18) {
            ctx->pc = 0x327C38u;
            goto label_327c38;
        }
    }
    ctx->pc = 0x327C20u;
    // 0x327c20: 0x18a0002a  blez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x327C20u;
    {
        const bool branch_taken_0x327c20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x327C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C20u;
        // 0x327c24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c20) {
            ctx->pc = 0x327CCCu;
            goto label_327ccc;
        }
    }
    ctx->pc = 0x327C28u;
    // 0x327c28: 0xc0c9d52  jal         func_327548
    ctx->pc = 0x327C28u;
    SET_GPR_U32(ctx, 31, 0x327C30u);
    ctx->pc = 0x327C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C28u;
    // 0x327c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327548u, 0x327C28u, 0x327C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C30u;
label_327c30:
    // 0x327c30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327C30u;
    {
        const bool branch_taken_0x327c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C30u;
        // 0x327c34: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c30) {
            ctx->pc = 0x327C40u;
            goto label_327c40;
        }
    }
    ctx->pc = 0x327C38u;
label_327c38:
    // 0x327c38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x327C38u;
    {
        const bool branch_taken_0x327c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C38u;
        // 0x327c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c38) {
            ctx->pc = 0x327CCCu;
            goto label_327ccc;
        }
    }
    ctx->pc = 0x327C40u;
label_327c40:
    // 0x327c40: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x327C40u;
    {
        const bool branch_taken_0x327c40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x327C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C40u;
        // 0x327c44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c40) {
            ctx->pc = 0x327CC8u;
            goto label_327cc8;
        }
    }
    ctx->pc = 0x327C48u;
    // 0x327c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x327c4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x327c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x327c50: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x327c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327c54: 0x0  nop
    ctx->pc = 0x327c54u;
    // NOP
label_327c58:
    // 0x327c58: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x327c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c60: 0xc10480a  jal         func_412028
    ctx->pc = 0x327C60u;
    SET_GPR_U32(ctx, 31, 0x327C68u);
    ctx->pc = 0x327C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C60u;
    // 0x327c64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x327C60u, 0x327C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C68u;
label_327c68:
    // 0x327c68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x327c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c6c: 0x14d3fff2  bne         $a2, $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x327C6Cu;
    {
        const bool branch_taken_0x327c6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        ctx->pc = 0x327C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C6Cu;
        // 0x327c70: 0x2061818  mult        $v1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c6c) {
            ctx->pc = 0x327C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327c38;
        }
    }
    ctx->pc = 0x327C74u;
    // 0x327c74: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x327c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x327c78: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x327c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327c7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x327c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327c80: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x327c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327c84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x327c88: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x327c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x327c8c: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x327c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x327c90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x327c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327c94: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x327c94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x327c98: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x327c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x327c9c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x327c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x327ca0: 0x97a50008  lhu         $a1, 0x8($sp)
    ctx->pc = 0x327ca0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327ca4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x327ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327ca8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x327ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x327cac: 0xa4650006  sh          $a1, 0x6($v1)
    ctx->pc = 0x327cacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x327cb0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x327cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x327cb4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x327cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327cb8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x327cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x327cbc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x327cbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x327cc0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x327CC0u;
    {
        const bool branch_taken_0x327cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CC0u;
        // 0x327cc4: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327cc0) {
            ctx->pc = 0x327C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327c58;
        }
    }
    ctx->pc = 0x327CC8u;
label_327cc8:
    // 0x327cc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x327cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327ccc:
    // 0x327ccc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x327cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x327cd0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x327cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x327cd4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x327cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327cd8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x327cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327cdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327ce0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x327ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x327ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x327CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CE4u;
        // 0x327ce8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327CECu;
    // 0x327cec: 0x0  nop
    ctx->pc = 0x327cecu;
    // NOP
    ctx->pc = 0x327cf0u;
}
