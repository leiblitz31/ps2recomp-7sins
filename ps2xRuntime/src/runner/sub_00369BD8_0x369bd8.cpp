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

// Function: sub_00369BD8
// Address: 0x369bd8 - 0x36abb8
void sub_00369BD8_0x369bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369BD8_0x369bd8");
#endif

    switch (ctx->pc) {
        case 0x369c2cu: goto label_369c2c;
        case 0x369c58u: goto label_369c58;
        case 0x369ca8u: goto label_369ca8;
        case 0x369cd0u: goto label_369cd0;
        case 0x369d08u: goto label_369d08;
        case 0x369da0u: goto label_369da0;
        case 0x369dbcu: goto label_369dbc;
        case 0x369dfcu: goto label_369dfc;
        case 0x369e20u: goto label_369e20;
        case 0x369e78u: goto label_369e78;
        case 0x369ea0u: goto label_369ea0;
        case 0x369ec8u: goto label_369ec8;
        case 0x369f34u: goto label_369f34;
        case 0x369fa4u: goto label_369fa4;
        case 0x36a018u: goto label_36a018;
        case 0x36a07cu: goto label_36a07c;
        case 0x36a0e0u: goto label_36a0e0;
        case 0x36a144u: goto label_36a144;
        case 0x36a1d4u: goto label_36a1d4;
        case 0x36a20cu: goto label_36a20c;
        case 0x36a230u: goto label_36a230;
        case 0x36a2b8u: goto label_36a2b8;
        case 0x36a308u: goto label_36a308;
        case 0x36a330u: goto label_36a330;
        case 0x36a3b8u: goto label_36a3b8;
        case 0x36a3e0u: goto label_36a3e0;
        case 0x36a434u: goto label_36a434;
        case 0x36a4a0u: goto label_36a4a0;
        case 0x36a508u: goto label_36a508;
        case 0x36a578u: goto label_36a578;
        case 0x36a5dcu: goto label_36a5dc;
        case 0x36a640u: goto label_36a640;
        case 0x36a6a4u: goto label_36a6a4;
        case 0x36a748u: goto label_36a748;
        case 0x36a790u: goto label_36a790;
        case 0x36a7b8u: goto label_36a7b8;
        case 0x36a83cu: goto label_36a83c;
        case 0x36a8a4u: goto label_36a8a4;
        case 0x36a910u: goto label_36a910;
        case 0x36a978u: goto label_36a978;
        case 0x36a9e8u: goto label_36a9e8;
        case 0x36aa4cu: goto label_36aa4c;
        case 0x36aab0u: goto label_36aab0;
        case 0x36ab14u: goto label_36ab14;
        default: break;
    }

    ctx->pc = 0x369bd8u;

    // 0x369bd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x369bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x369bdc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x369bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x369be0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x369be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x369be4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x369be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369be8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x369be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x369bec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x369becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bf0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x369bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x369bf4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x369bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x369bf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x369bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x369bfc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x369bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x369c00: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x369c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x369c04: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x369c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x369c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369c0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369c10: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x369c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x369c14: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x369c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369c18: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x369c18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369c1c: 0x14a60302  bne         $a1, $a2, . + 4 + (0x302 << 2)
    ctx->pc = 0x369C1Cu;
    {
        const bool branch_taken_0x369c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x369C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C1Cu;
        // 0x369c20: 0x8e70000c  lw          $s0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c1c) {
            ctx->pc = 0x36A828u;
            goto label_36a828;
        }
    }
    ctx->pc = 0x369C24u;
    // 0x369c24: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x369C24u;
    SET_GPR_U32(ctx, 31, 0x369C2Cu);
    ctx->pc = 0x369C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C24u;
    // 0x369c28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x369C24u, 0x369C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C2Cu;
label_369c2c:
    // 0x369c2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x369c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x369c30: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x369c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x369c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x369c34u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x369c38: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x369c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x369c3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x369C3Cu;
    {
        const bool branch_taken_0x369c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C3Cu;
        // 0x369c40: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c3c) {
            ctx->pc = 0x369C78u;
            goto label_369c78;
        }
    }
    ctx->pc = 0x369C44u;
    // 0x369c44: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x369c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x369c48: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x369c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x369c4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x369c4cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x369c50: 0xf  sync
    ctx->pc = 0x369c50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369c54: 0x40f  sync.p
    ctx->pc = 0x369c54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369c58:
    // 0x369c58: 0x0  nop
    ctx->pc = 0x369c58u;
    // NOP
    // 0x369c5c: 0x0  nop
    ctx->pc = 0x369c5cu;
    // NOP
    // 0x369c60: 0x0  nop
    ctx->pc = 0x369c60u;
    // NOP
    // 0x369c64: 0x0  nop
    ctx->pc = 0x369c64u;
    // NOP
    // 0x369c68: 0x0  nop
    ctx->pc = 0x369c68u;
    // NOP
    // 0x369c6c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369C6Cu;
    {
        const bool branch_taken_0x369c6c = (false);
        if (branch_taken_0x369c6c) {
            ctx->pc = 0x369C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369c58;
        }
    }
    ctx->pc = 0x369C74u;
    // 0x369c74: 0x0  nop
    ctx->pc = 0x369c74u;
    // NOP
label_369c78:
    // 0x369c78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369c7c: 0x2a44007f  slti        $a0, $s2, 0x7F
    ctx->pc = 0x369c7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x369c80: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x369c84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369c88: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369c8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x369C8Cu;
    {
        const bool branch_taken_0x369c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C8Cu;
        // 0x369c90: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c8c) {
            ctx->pc = 0x369CECu;
            goto label_369cec;
        }
    }
    ctx->pc = 0x369C94u;
    // 0x369c94: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x369c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x369c98: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x369c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x369c9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x369c9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x369ca0: 0xf  sync
    ctx->pc = 0x369ca0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369ca4: 0x40f  sync.p
    ctx->pc = 0x369ca4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369ca8:
    // 0x369ca8: 0x0  nop
    ctx->pc = 0x369ca8u;
    // NOP
    // 0x369cac: 0x0  nop
    ctx->pc = 0x369cacu;
    // NOP
    // 0x369cb0: 0x0  nop
    ctx->pc = 0x369cb0u;
    // NOP
    // 0x369cb4: 0x0  nop
    ctx->pc = 0x369cb4u;
    // NOP
    // 0x369cb8: 0x0  nop
    ctx->pc = 0x369cb8u;
    // NOP
    // 0x369cbc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369CBCu;
    {
        const bool branch_taken_0x369cbc = (false);
        if (branch_taken_0x369cbc) {
            ctx->pc = 0x369CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369ca8;
        }
    }
    ctx->pc = 0x369CC4u;
    // 0x369cc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369cc8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x369ccc: 0x0  nop
    ctx->pc = 0x369cccu;
    // NOP
label_369cd0:
    // 0x369cd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x369cd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369cd8: 0x0  nop
    ctx->pc = 0x369cd8u;
    // NOP
    // 0x369cdc: 0x0  nop
    ctx->pc = 0x369cdcu;
    // NOP
    // 0x369ce0: 0x0  nop
    ctx->pc = 0x369ce0u;
    // NOP
    // 0x369ce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369CE4u;
    {
        const bool branch_taken_0x369ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369ce4) {
            ctx->pc = 0x369CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369cd0;
        }
    }
    ctx->pc = 0x369CECu;
label_369cec:
    // 0x369cec: 0xc6610068  lwc1        $f1, 0x68($s3)
    ctx->pc = 0x369cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369cf0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x369cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x369cf4: 0x34633fb0  ori         $v1, $v1, 0x3FB0
    ctx->pc = 0x369cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16304);
    // 0x369cf8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x369cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FB0u, bits); }
    // 0x369cfc: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x369cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369d00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FB4u, bits); }
    // 0x369d04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x369d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_369d08:
    // 0x369d08: 0x42000039  di
    ctx->pc = 0x369d08u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369d0c: 0x40f  sync.p
    ctx->pc = 0x369d0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369d10: 0x40056000  mfc0        $a1, Status
    ctx->pc = 0x369d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_status);
    // 0x369d14: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x369d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x369d18: 0x0  nop
    ctx->pc = 0x369d18u;
    // NOP
    // 0x369d1c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369D1Cu;
    {
        const bool branch_taken_0x369d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x369d1c) {
            ctx->pc = 0x369D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369d08;
        }
    }
    ctx->pc = 0x369D24u;
    // 0x369d24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x369d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x369d28: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x369d28u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x369d2c: 0x4a0002ff  vnop
    ctx->pc = 0x369d2cu;
    // NOP operation, no action needed for VU0
    // 0x369d30: 0x4a0002ff  vnop
    ctx->pc = 0x369d30u;
    // NOP operation, no action needed for VU0
    // 0x369d34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x369d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369d38: 0x4be00962  vaddi.xyzw  $vf5, $vf1, $I
    ctx->pc = 0x369d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x369d3c: 0x42000038  ei
    ctx->pc = 0x369d3cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369d40: 0x14800151  bnez        $a0, . + 4 + (0x151 << 2)
    ctx->pc = 0x369D40u;
    {
        const bool branch_taken_0x369d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x369d40) {
            ctx->pc = 0x36A288u;
            goto label_36a288;
        }
    }
    ctx->pc = 0x369D48u;
    // 0x369d48: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x369d48u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x369d4c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x369d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x369d50: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x369d50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x369d54: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x369d54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x369d58: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x369d58u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x369d5c: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x369d5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x369d60: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x369d60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x369d64: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x369d64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x369d68: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x369d68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x369d6c: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x369d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x369d70: 0x35add000  ori         $t5, $t5, 0xD000
    ctx->pc = 0x369d70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53248);
    // 0x369d74: 0x356be020  ori         $t3, $t3, 0xE020
    ctx->pc = 0x369d74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57376);
    // 0x369d78: 0x240e0100  addiu       $t6, $zero, 0x100
    ctx->pc = 0x369d78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x369d7c: 0x358cd400  ori         $t4, $t4, 0xD400
    ctx->pc = 0x369d7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)54272);
    // 0x369d80: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x369d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x369d84: 0x35efe010  ori         $t7, $t7, 0xE010
    ctx->pc = 0x369d84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)57360);
    // 0x369d88: 0x37ded480  ori         $fp, $fp, 0xD480
    ctx->pc = 0x369d88u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)54400);
    // 0x369d8c: 0x36f7d410  ori         $s7, $s7, 0xD410
    ctx->pc = 0x369d8cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54288);
    // 0x369d90: 0x36d6d420  ori         $s6, $s6, 0xD420
    ctx->pc = 0x369d90u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54304);
    // 0x369d94: 0x36b5d080  ori         $s5, $s5, 0xD080
    ctx->pc = 0x369d94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53376);
    // 0x369d98: 0x3694d010  ori         $s4, $s4, 0xD010
    ctx->pc = 0x369d98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53264);
    // 0x369d9c: 0x3739d020  ori         $t9, $t9, 0xD020
    ctx->pc = 0x369d9cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)53280);
label_369da0:
    // 0x369da0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x369da0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 13), 0))); // MMIO: 0x1000d000
    // 0x369da4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369da8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x369DA8u;
    {
        const bool branch_taken_0x369da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369da8) {
            ctx->pc = 0x369DD8u;
            goto label_369dd8;
        }
    }
    ctx->pc = 0x369DB0u;
    // 0x369db0: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x369db0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x369db4: 0xf  sync
    ctx->pc = 0x369db4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369db8: 0x40f  sync.p
    ctx->pc = 0x369db8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369dbc:
    // 0x369dbc: 0x0  nop
    ctx->pc = 0x369dbcu;
    // NOP
    // 0x369dc0: 0x0  nop
    ctx->pc = 0x369dc0u;
    // NOP
    // 0x369dc4: 0x0  nop
    ctx->pc = 0x369dc4u;
    // NOP
    // 0x369dc8: 0x0  nop
    ctx->pc = 0x369dc8u;
    // NOP
    // 0x369dcc: 0x0  nop
    ctx->pc = 0x369dccu;
    // NOP
    // 0x369dd0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369DD0u;
    {
        const bool branch_taken_0x369dd0 = (false);
        if (branch_taken_0x369dd0) {
            ctx->pc = 0x369DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369dbc;
        }
    }
    ctx->pc = 0x369DD8u;
label_369dd8:
    // 0x369dd8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x369dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x369ddc: 0x2647ff81  addiu       $a3, $s2, -0x7F
    ctx->pc = 0x369ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967169));
    // 0x369de0: 0x26121fc0  addiu       $s2, $s0, 0x1FC0
    ctx->pc = 0x369de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x369de4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369de8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x369DE8u;
    {
        const bool branch_taken_0x369de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DE8u;
        // 0x369dec: 0x26381fc0  addiu       $t8, $s1, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 8128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369de8) {
            ctx->pc = 0x369E3Cu;
            goto label_369e3c;
        }
    }
    ctx->pc = 0x369DF0u;
    // 0x369df0: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x369df0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x369df4: 0xf  sync
    ctx->pc = 0x369df4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369df8: 0x40f  sync.p
    ctx->pc = 0x369df8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369dfc:
    // 0x369dfc: 0x0  nop
    ctx->pc = 0x369dfcu;
    // NOP
    // 0x369e00: 0x0  nop
    ctx->pc = 0x369e00u;
    // NOP
    // 0x369e04: 0x0  nop
    ctx->pc = 0x369e04u;
    // NOP
    // 0x369e08: 0x0  nop
    ctx->pc = 0x369e08u;
    // NOP
    // 0x369e0c: 0x0  nop
    ctx->pc = 0x369e0cu;
    // NOP
    // 0x369e10: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369E10u;
    {
        const bool branch_taken_0x369e10 = (false);
        if (branch_taken_0x369e10) {
            ctx->pc = 0x369DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369dfc;
        }
    }
    ctx->pc = 0x369E18u;
    // 0x369e18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369e1c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_369e20:
    // 0x369e20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369e20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x369e24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369e28: 0x0  nop
    ctx->pc = 0x369e28u;
    // NOP
    // 0x369e2c: 0x0  nop
    ctx->pc = 0x369e2cu;
    // NOP
    // 0x369e30: 0x0  nop
    ctx->pc = 0x369e30u;
    // NOP
    // 0x369e34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369E34u;
    {
        const bool branch_taken_0x369e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369e34) {
            ctx->pc = 0x369E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369e20;
        }
    }
    ctx->pc = 0x369E3Cu;
label_369e3c:
    // 0x369e3c: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x369e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x369e40: 0x240301fc  addiu       $v1, $zero, 0x1FC
    ctx->pc = 0x369e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x369e44: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x369e44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x369e48: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x369e48u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x369e4c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x369e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x369e50: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x369e50u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x369e54: 0xf  sync
    ctx->pc = 0x369e54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369e58: 0x40f  sync.p
    ctx->pc = 0x369e58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369e5c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x369e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x369e60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369e64: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x369E64u;
    {
        const bool branch_taken_0x369e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E64u;
        // 0x369e68: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e64) {
            ctx->pc = 0x369EBCu;
            goto label_369ebc;
        }
    }
    ctx->pc = 0x369E6Cu;
    // 0x369e6c: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x369e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x369e70: 0xf  sync
    ctx->pc = 0x369e70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369e74: 0x40f  sync.p
    ctx->pc = 0x369e74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369e78:
    // 0x369e78: 0x0  nop
    ctx->pc = 0x369e78u;
    // NOP
    // 0x369e7c: 0x0  nop
    ctx->pc = 0x369e7cu;
    // NOP
    // 0x369e80: 0x0  nop
    ctx->pc = 0x369e80u;
    // NOP
    // 0x369e84: 0x0  nop
    ctx->pc = 0x369e84u;
    // NOP
    // 0x369e88: 0x0  nop
    ctx->pc = 0x369e88u;
    // NOP
    // 0x369e8c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369E8Cu;
    {
        const bool branch_taken_0x369e8c = (false);
        if (branch_taken_0x369e8c) {
            ctx->pc = 0x369E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369e78;
        }
    }
    ctx->pc = 0x369E94u;
    // 0x369e94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369e98: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x369e9c: 0x0  nop
    ctx->pc = 0x369e9cu;
    // NOP
label_369ea0:
    // 0x369ea0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x369ea4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369ea8: 0x0  nop
    ctx->pc = 0x369ea8u;
    // NOP
    // 0x369eac: 0x0  nop
    ctx->pc = 0x369eacu;
    // NOP
    // 0x369eb0: 0x0  nop
    ctx->pc = 0x369eb0u;
    // NOP
    // 0x369eb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369EB4u;
    {
        const bool branch_taken_0x369eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EB4u;
        // 0x369eb8: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369eb4) {
            ctx->pc = 0x369EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369ea0;
        }
    }
    ctx->pc = 0x369EBCu;
label_369ebc:
    // 0x369ebc: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x369ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x369ec0: 0x34c61fc0  ori         $a2, $a2, 0x1FC0
    ctx->pc = 0x369ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8128);
    // 0x369ec4: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x369ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_369ec8:
    // 0x369ec8: 0x42000039  di
    ctx->pc = 0x369ec8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369ecc: 0x40f  sync.p
    ctx->pc = 0x369eccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369ed0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369ed4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x369ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x369ed8: 0x0  nop
    ctx->pc = 0x369ed8u;
    // NOP
    // 0x369edc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369EDCu;
    {
        const bool branch_taken_0x369edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369edc) {
            ctx->pc = 0x369EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369ec8;
        }
    }
    ctx->pc = 0x369EE4u;
    // 0x369ee4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x369ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369ee8: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x369ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369eec: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369eecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369ef0: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369ef0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x369ef4: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x369ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369ef8: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x369ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369efc: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369f00: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369f04: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369f08: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369f0c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369f10: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369f10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369f14: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x369f14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369f18: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x369f18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369f1c: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x369f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369f20: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x369f20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x369f24: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x369f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x369f28: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x369f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x369f2c: 0x42000038  ei
    ctx->pc = 0x369f2cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369f30: 0x240a007d  addiu       $t2, $zero, 0x7D
    ctx->pc = 0x369f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_369f34:
    // 0x369f34: 0x42000039  di
    ctx->pc = 0x369f34u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369f38: 0x40f  sync.p
    ctx->pc = 0x369f38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369f3c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369f40: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x369f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x369f44: 0x0  nop
    ctx->pc = 0x369f44u;
    // NOP
    // 0x369f48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369F48u;
    {
        const bool branch_taken_0x369f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369f48) {
            ctx->pc = 0x369F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369f34;
        }
    }
    ctx->pc = 0x369F50u;
    // 0x369f50: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x369f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369f54: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x369f54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369f58: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369f58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369f5c: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369f5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x369f60: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x369f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369f64: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x369f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369f68: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369f6c: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369f70: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369f74: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369f78: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369f7c: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369f80: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x369f80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369f84: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x369f84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369f88: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x369f88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369f8c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x369f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x369f90: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x369f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x369f94: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x369f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x369f98: 0x34c62040  ori         $a2, $a2, 0x2040
    ctx->pc = 0x369f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8256);
    // 0x369f9c: 0x42000038  ei
    ctx->pc = 0x369f9cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369fa0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x369fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_369fa4:
    // 0x369fa4: 0x42000039  di
    ctx->pc = 0x369fa4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369fa8: 0x40f  sync.p
    ctx->pc = 0x369fa8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369fac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369facu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369fb0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x369fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x369fb4: 0x0  nop
    ctx->pc = 0x369fb4u;
    // NOP
    // 0x369fb8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369FB8u;
    {
        const bool branch_taken_0x369fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369fb8) {
            ctx->pc = 0x369FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369fa4;
        }
    }
    ctx->pc = 0x369FC0u;
    // 0x369fc0: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x369fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369fc4: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x369fc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369fc8: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369fc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369fcc: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x369fd0: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x369fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369fd4: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x369fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369fd8: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369fdc: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369fe0: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369fe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369fe4: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369fe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369fe8: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369fe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369fec: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369fecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369ff0: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x369ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369ff4: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x369ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369ff8: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x369ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369ffc: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x369ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36a000: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x36a000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x36a004: 0x42000038  ei
    ctx->pc = 0x36a004u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a008: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x36a008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x36a00c: 0x540006a  bltz        $t2, . + 4 + (0x6A << 2)
    ctx->pc = 0x36A00Cu;
    {
        const bool branch_taken_0x36a00c = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x36a00c) {
            ctx->pc = 0x36A1B8u;
            goto label_36a1b8;
        }
    }
    ctx->pc = 0x36A014u;
    // 0x36a014: 0x0  nop
    ctx->pc = 0x36a014u;
    // NOP
label_36a018:
    // 0x36a018: 0x42000039  di
    ctx->pc = 0x36a018u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a01c: 0x40f  sync.p
    ctx->pc = 0x36a01cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a020: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a024: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x36a024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x36a028: 0x0  nop
    ctx->pc = 0x36a028u;
    // NOP
    // 0x36a02c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A02Cu;
    {
        const bool branch_taken_0x36a02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a02c) {
            ctx->pc = 0x36A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a018;
        }
    }
    ctx->pc = 0x36A034u;
    // 0x36a034: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36a034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a038: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x36a038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36a03c: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x36a03cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36a040: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x36a040u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36a044: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a048: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a04c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a050: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a054: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a058: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a05c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a05cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a060: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x36a060u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a064: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36a064u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a068: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x36a068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a06c: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x36a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a070: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x36a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36a074: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x36a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x36a078: 0x42000038  ei
    ctx->pc = 0x36a078u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36a07c:
    // 0x36a07c: 0x42000039  di
    ctx->pc = 0x36a07cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a080: 0x40f  sync.p
    ctx->pc = 0x36a080u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a084: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a088: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x36a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x36a08c: 0x0  nop
    ctx->pc = 0x36a08cu;
    // NOP
    // 0x36a090: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A090u;
    {
        const bool branch_taken_0x36a090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a090) {
            ctx->pc = 0x36A07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a07c;
        }
    }
    ctx->pc = 0x36A098u;
    // 0x36a098: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36a098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36a09c: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x36a09cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36a0a0: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x36a0a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36a0a4: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x36a0a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x36a0a8: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a0a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a0ac: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a0acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a0b0: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a0b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a0b4: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a0b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a0b8: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a0b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a0bc: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a0bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a0c0: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a0c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a0c4: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a0c8: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x36a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a0cc: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a0d0: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a0d4: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x36a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x36a0d8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x36a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x36a0dc: 0x42000038  ei
    ctx->pc = 0x36a0dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36a0e0:
    // 0x36a0e0: 0x42000039  di
    ctx->pc = 0x36a0e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a0e4: 0x40f  sync.p
    ctx->pc = 0x36a0e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a0e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a0ec: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x36a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x36a0f0: 0x0  nop
    ctx->pc = 0x36a0f0u;
    // NOP
    // 0x36a0f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A0F4u;
    {
        const bool branch_taken_0x36a0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a0f4) {
            ctx->pc = 0x36A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a0e0;
        }
    }
    ctx->pc = 0x36A0FCu;
    // 0x36a0fc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x36a0fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36a100: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x36a100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x36a104: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x36a104u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x36a108: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x36a108u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x36a10c: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a10cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a110: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a114: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a118: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a11c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a11cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a120: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a124: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a128: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36a128u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a12c: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x36a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a130: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36a130u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a134: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36a134u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a138: 0x250400c0  addiu       $a0, $t0, 0xC0
    ctx->pc = 0x36a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x36a13c: 0x24c300c0  addiu       $v1, $a2, 0xC0
    ctx->pc = 0x36a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x36a140: 0x42000038  ei
    ctx->pc = 0x36a140u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36a144:
    // 0x36a144: 0x42000039  di
    ctx->pc = 0x36a144u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a148: 0x40f  sync.p
    ctx->pc = 0x36a148u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a14c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a150: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x36a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x36a154: 0x0  nop
    ctx->pc = 0x36a154u;
    // NOP
    // 0x36a158: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A158u;
    {
        const bool branch_taken_0x36a158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a158) {
            ctx->pc = 0x36A144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a144;
        }
    }
    ctx->pc = 0x36A160u;
    // 0x36a160: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36a160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36a164: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x36a164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36a168: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x36a168u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36a16c: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x36a16cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x36a170: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a174: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a178: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a17c: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a180: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a180u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a184: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a188: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a188u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a18c: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a190: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x36a190u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a194: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36a194u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a198: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36a198u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a19c: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x36a19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x36a1a0: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x36a1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x36a1a4: 0x42000038  ei
    ctx->pc = 0x36a1a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a1a8: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x36a1a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x36a1ac: 0x541ff9a  bgez        $t2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x36A1ACu;
    {
        const bool branch_taken_0x36a1ac = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x36a1ac) {
            ctx->pc = 0x36A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a018;
        }
    }
    ctx->pc = 0x36A1B4u;
    // 0x36a1b4: 0x0  nop
    ctx->pc = 0x36a1b4u;
    // NOP
label_36a1b8:
    // 0x36a1b8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x36a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36a1bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a1c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36A1C0u;
    {
        const bool branch_taken_0x36a1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1c0) {
            ctx->pc = 0x36A1F0u;
            goto label_36a1f0;
        }
    }
    ctx->pc = 0x36A1C8u;
    // 0x36a1c8: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x36a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x36a1cc: 0xf  sync
    ctx->pc = 0x36a1ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a1d0: 0x40f  sync.p
    ctx->pc = 0x36a1d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a1d4:
    // 0x36a1d4: 0x0  nop
    ctx->pc = 0x36a1d4u;
    // NOP
    // 0x36a1d8: 0x0  nop
    ctx->pc = 0x36a1d8u;
    // NOP
    // 0x36a1dc: 0x0  nop
    ctx->pc = 0x36a1dcu;
    // NOP
    // 0x36a1e0: 0x0  nop
    ctx->pc = 0x36a1e0u;
    // NOP
    // 0x36a1e4: 0x0  nop
    ctx->pc = 0x36a1e4u;
    // NOP
    // 0x36a1e8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A1E8u;
    {
        const bool branch_taken_0x36a1e8 = (false);
        if (branch_taken_0x36a1e8) {
            ctx->pc = 0x36A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a1d4;
        }
    }
    ctx->pc = 0x36A1F0u;
label_36a1f0:
    // 0x36a1f0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x36a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36a1f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a1f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36A1F8u;
    {
        const bool branch_taken_0x36a1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1f8) {
            ctx->pc = 0x36A24Cu;
            goto label_36a24c;
        }
    }
    ctx->pc = 0x36A200u;
    // 0x36a200: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x36a200u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x36a204: 0xf  sync
    ctx->pc = 0x36a204u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a208: 0x40f  sync.p
    ctx->pc = 0x36a208u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a20c:
    // 0x36a20c: 0x0  nop
    ctx->pc = 0x36a20cu;
    // NOP
    // 0x36a210: 0x0  nop
    ctx->pc = 0x36a210u;
    // NOP
    // 0x36a214: 0x0  nop
    ctx->pc = 0x36a214u;
    // NOP
    // 0x36a218: 0x0  nop
    ctx->pc = 0x36a218u;
    // NOP
    // 0x36a21c: 0x0  nop
    ctx->pc = 0x36a21cu;
    // NOP
    // 0x36a220: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A220u;
    {
        const bool branch_taken_0x36a220 = (false);
        if (branch_taken_0x36a220) {
            ctx->pc = 0x36A20Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a20c;
        }
    }
    ctx->pc = 0x36A228u;
    // 0x36a228: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a22c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36a22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_36a230:
    // 0x36a230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36a230u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36a234: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a238: 0x0  nop
    ctx->pc = 0x36a238u;
    // NOP
    // 0x36a23c: 0x0  nop
    ctx->pc = 0x36a23cu;
    // NOP
    // 0x36a240: 0x0  nop
    ctx->pc = 0x36a240u;
    // NOP
    // 0x36a244: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A244u;
    {
        const bool branch_taken_0x36a244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a244) {
            ctx->pc = 0x36A230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a230;
        }
    }
    ctx->pc = 0x36A24Cu;
label_36a24c:
    // 0x36a24c: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x36a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x36a250: 0x24051fc0  addiu       $a1, $zero, 0x1FC0
    ctx->pc = 0x36a250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x36a254: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x36a254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x36a258: 0x240201fc  addiu       $v0, $zero, 0x1FC
    ctx->pc = 0x36a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x36a25c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x36a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x36a260: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x36a260u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x36a264: 0xadae0000  sw          $t6, 0x0($t5)
    ctx->pc = 0x36a264u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
    // 0x36a268: 0xf  sync
    ctx->pc = 0x36a268u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a26c: 0x40f  sync.p
    ctx->pc = 0x36a26cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a270: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x36a270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a274: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x36a274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a278: 0x2a42007f  slti        $v0, $s2, 0x7F
    ctx->pc = 0x36a278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x36a27c: 0x1040fec8  beqz        $v0, . + 4 + (-0x138 << 2)
    ctx->pc = 0x36A27Cu;
    {
        const bool branch_taken_0x36a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A27Cu;
        // 0x36a280: 0x300882d  daddu       $s1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a27c) {
            ctx->pc = 0x369DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369da0;
        }
    }
    ctx->pc = 0x36A284u;
    // 0x36a284: 0x0  nop
    ctx->pc = 0x36a284u;
    // NOP
label_36a288:
    // 0x36a288: 0x1240023f  beqz        $s2, . + 4 + (0x23F << 2)
    ctx->pc = 0x36A288u;
    {
        const bool branch_taken_0x36a288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A288u;
        // 0x36a28c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a288) {
            ctx->pc = 0x36AB88u;
            goto label_36ab88;
        }
    }
    ctx->pc = 0x36A290u;
    // 0x36a290: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36a294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36a294u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x36a298: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36a298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36a29c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36A29Cu;
    {
        const bool branch_taken_0x36a29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A29Cu;
        // 0x36a2a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a29c) {
            ctx->pc = 0x36A2D8u;
            goto label_36a2d8;
        }
    }
    ctx->pc = 0x36A2A4u;
    // 0x36a2a4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a2a8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36a2ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36a2acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36a2b0: 0xf  sync
    ctx->pc = 0x36a2b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a2b4: 0x40f  sync.p
    ctx->pc = 0x36a2b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a2b8:
    // 0x36a2b8: 0x0  nop
    ctx->pc = 0x36a2b8u;
    // NOP
    // 0x36a2bc: 0x0  nop
    ctx->pc = 0x36a2bcu;
    // NOP
    // 0x36a2c0: 0x0  nop
    ctx->pc = 0x36a2c0u;
    // NOP
    // 0x36a2c4: 0x0  nop
    ctx->pc = 0x36a2c4u;
    // NOP
    // 0x36a2c8: 0x0  nop
    ctx->pc = 0x36a2c8u;
    // NOP
    // 0x36a2cc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A2CCu;
    {
        const bool branch_taken_0x36a2cc = (false);
        if (branch_taken_0x36a2cc) {
            ctx->pc = 0x36A2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a2b8;
        }
    }
    ctx->pc = 0x36A2D4u;
    // 0x36a2d4: 0x0  nop
    ctx->pc = 0x36a2d4u;
    // NOP
label_36a2d8:
    // 0x36a2d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a2dc: 0x124880  sll         $t1, $s2, 2
    ctx->pc = 0x36a2dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36a2e0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36a2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36a2e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36a2e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a2ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36A2ECu;
    {
        const bool branch_taken_0x36a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A2ECu;
        // 0x36a2f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a2ec) {
            ctx->pc = 0x36A34Cu;
            goto label_36a34c;
        }
    }
    ctx->pc = 0x36A2F4u;
    // 0x36a2f4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36a2f8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36a2fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36a2fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36a300: 0xf  sync
    ctx->pc = 0x36a300u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a304: 0x40f  sync.p
    ctx->pc = 0x36a304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a308:
    // 0x36a308: 0x0  nop
    ctx->pc = 0x36a308u;
    // NOP
    // 0x36a30c: 0x0  nop
    ctx->pc = 0x36a30cu;
    // NOP
    // 0x36a310: 0x0  nop
    ctx->pc = 0x36a310u;
    // NOP
    // 0x36a314: 0x0  nop
    ctx->pc = 0x36a314u;
    // NOP
    // 0x36a318: 0x0  nop
    ctx->pc = 0x36a318u;
    // NOP
    // 0x36a31c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A31Cu;
    {
        const bool branch_taken_0x36a31c = (false);
        if (branch_taken_0x36a31c) {
            ctx->pc = 0x36A308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a308;
        }
    }
    ctx->pc = 0x36A324u;
    // 0x36a324: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a328: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36a328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36a32c: 0x0  nop
    ctx->pc = 0x36a32cu;
    // NOP
label_36a330:
    // 0x36a330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36a330u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36a334: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a338: 0x0  nop
    ctx->pc = 0x36a338u;
    // NOP
    // 0x36a33c: 0x0  nop
    ctx->pc = 0x36a33cu;
    // NOP
    // 0x36a340: 0x0  nop
    ctx->pc = 0x36a340u;
    // NOP
    // 0x36a344: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A344u;
    {
        const bool branch_taken_0x36a344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a344) {
            ctx->pc = 0x36A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a330;
        }
    }
    ctx->pc = 0x36A34Cu;
label_36a34c:
    // 0x36a34c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a350: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x36a350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36a354: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x36a358: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a35c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36a35cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x36a360: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x36a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x36a364: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36a364u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x36a368: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a36c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x36a36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x36a370: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a374: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x36a374u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x36a378: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x36a378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x36a37c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x36a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x36a380: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x36a380u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 9)); // MMIO: 0x1000d420
    // 0x36a384: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x36a384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x36a388: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x36a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a38c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36a38cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x36a390: 0xf  sync
    ctx->pc = 0x36a390u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a394: 0x40f  sync.p
    ctx->pc = 0x36a394u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a398: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36a39c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a3a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36A3A0u;
    {
        const bool branch_taken_0x36a3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3A0u;
        // 0x36a3a4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3a0) {
            ctx->pc = 0x36A3FCu;
            goto label_36a3fc;
        }
    }
    ctx->pc = 0x36A3A8u;
    // 0x36a3a8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36a3ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36a3acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x36a3b0: 0xf  sync
    ctx->pc = 0x36a3b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a3b4: 0x40f  sync.p
    ctx->pc = 0x36a3b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a3b8:
    // 0x36a3b8: 0x0  nop
    ctx->pc = 0x36a3b8u;
    // NOP
    // 0x36a3bc: 0x0  nop
    ctx->pc = 0x36a3bcu;
    // NOP
    // 0x36a3c0: 0x0  nop
    ctx->pc = 0x36a3c0u;
    // NOP
    // 0x36a3c4: 0x0  nop
    ctx->pc = 0x36a3c4u;
    // NOP
    // 0x36a3c8: 0x0  nop
    ctx->pc = 0x36a3c8u;
    // NOP
    // 0x36a3cc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A3CCu;
    {
        const bool branch_taken_0x36a3cc = (false);
        if (branch_taken_0x36a3cc) {
            ctx->pc = 0x36A3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a3b8;
        }
    }
    ctx->pc = 0x36A3D4u;
    // 0x36a3d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a3d8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36a3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36a3dc: 0x0  nop
    ctx->pc = 0x36a3dcu;
    // NOP
label_36a3e0:
    // 0x36a3e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36a3e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a3e8: 0x0  nop
    ctx->pc = 0x36a3e8u;
    // NOP
    // 0x36a3ec: 0x0  nop
    ctx->pc = 0x36a3ecu;
    // NOP
    // 0x36a3f0: 0x0  nop
    ctx->pc = 0x36a3f0u;
    // NOP
    // 0x36a3f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A3F4u;
    {
        const bool branch_taken_0x36a3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a3f4) {
            ctx->pc = 0x36A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a3e0;
        }
    }
    ctx->pc = 0x36A3FCu;
label_36a3fc:
    // 0x36a3fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x36a3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x36a400: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x36a400u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x36a404: 0x1a4000c4  blez        $s2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x36A404u;
    {
        const bool branch_taken_0x36a404 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x36A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A404u;
        // 0x36a408: 0x34c61fc0  ori         $a2, $a2, 0x1FC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a404) {
            ctx->pc = 0x36A718u;
            goto label_36a718;
        }
    }
    ctx->pc = 0x36A40Cu;
    // 0x36a40c: 0x121023  negu        $v0, $s2
    ctx->pc = 0x36a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x36a410: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x36a410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x36a414: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x36a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36a418: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x36A418u;
    {
        const bool branch_taken_0x36a418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A418u;
        // 0x36a41c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a418) {
            ctx->pc = 0x36A578u;
            goto label_36a578;
        }
    }
    ctx->pc = 0x36A420u;
    // 0x36a420: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x36a420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a424: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x36A424u;
    {
        const bool branch_taken_0x36a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A424u;
        // 0x36a428: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a424) {
            ctx->pc = 0x36A508u;
            goto label_36a508;
        }
    }
    ctx->pc = 0x36A42Cu;
    // 0x36a42c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36A42Cu;
    {
        const bool branch_taken_0x36a42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a42c) {
            ctx->pc = 0x36A4A0u;
            goto label_36a4a0;
        }
    }
    ctx->pc = 0x36A434u;
label_36a434:
    // 0x36a434: 0x42000039  di
    ctx->pc = 0x36a434u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a438: 0x40f  sync.p
    ctx->pc = 0x36a438u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a43c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a440: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a444: 0x0  nop
    ctx->pc = 0x36a444u;
    // NOP
    // 0x36a448: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A448u;
    {
        const bool branch_taken_0x36a448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a448) {
            ctx->pc = 0x36A434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a434;
        }
    }
    ctx->pc = 0x36A450u;
    // 0x36a450: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36a450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a454: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x36a454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36a458: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x36a458u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36a45c: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x36a45cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36a460: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a464: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a468: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a46c: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a46cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a470: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a474: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a474u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a478: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a47c: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x36a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a480: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36a480u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a484: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x36a484u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a488: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x36a488u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a48c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x36a48cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x36a490: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x36a490u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x36a494: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x36a494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x36a498: 0x42000038  ei
    ctx->pc = 0x36a498u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a49c: 0x264affff  addiu       $t2, $s2, -0x1
    ctx->pc = 0x36a49cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_36a4a0:
    // 0x36a4a0: 0x42000039  di
    ctx->pc = 0x36a4a0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a4a4: 0x40f  sync.p
    ctx->pc = 0x36a4a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a4a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a4ac: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a4b0: 0x0  nop
    ctx->pc = 0x36a4b0u;
    // NOP
    // 0x36a4b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A4B4u;
    {
        const bool branch_taken_0x36a4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a4b4) {
            ctx->pc = 0x36A4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a4a0;
        }
    }
    ctx->pc = 0x36A4BCu;
    // 0x36a4bc: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36a4bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a4c0: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x36a4c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36a4c4: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x36a4c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36a4c8: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x36a4c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36a4cc: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a4d0: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a4d4: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a4d8: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a4d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a4dc: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a4dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a4e0: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a4e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a4e4: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a4e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a4e8: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x36a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a4ec: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a4f0: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x36a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a4f4: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x36a4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a4f8: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x36a4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36a4fc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x36a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x36a500: 0x42000038  ei
    ctx->pc = 0x36a500u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a504: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x36a504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_36a508:
    // 0x36a508: 0x42000039  di
    ctx->pc = 0x36a508u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a50c: 0x40f  sync.p
    ctx->pc = 0x36a50cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a510: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a514: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a518: 0x0  nop
    ctx->pc = 0x36a518u;
    // NOP
    // 0x36a51c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A51Cu;
    {
        const bool branch_taken_0x36a51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a51c) {
            ctx->pc = 0x36A508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a508;
        }
    }
    ctx->pc = 0x36A524u;
    // 0x36a524: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36a524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a528: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x36a528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36a52c: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x36a52cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36a530: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x36a530u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36a534: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a538: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a53c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a540: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a544: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a548: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a548u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a54c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a54cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a550: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x36a550u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a554: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36a554u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a558: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x36a558u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a55c: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x36a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a560: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x36a560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36a564: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x36a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x36a568: 0x42000038  ei
    ctx->pc = 0x36a568u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a56c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x36a56cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x36a570: 0x1140006b  beqz        $t2, . + 4 + (0x6B << 2)
    ctx->pc = 0x36A570u;
    {
        const bool branch_taken_0x36a570 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A570u;
        // 0x36a574: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a570) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A578u;
label_36a578:
    // 0x36a578: 0x42000039  di
    ctx->pc = 0x36a578u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a57c: 0x40f  sync.p
    ctx->pc = 0x36a57cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a580: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a584: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a588: 0x0  nop
    ctx->pc = 0x36a588u;
    // NOP
    // 0x36a58c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A58Cu;
    {
        const bool branch_taken_0x36a58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a58c) {
            ctx->pc = 0x36A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a578;
        }
    }
    ctx->pc = 0x36A594u;
    // 0x36a594: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36a594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a598: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x36a598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36a59c: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x36a59cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36a5a0: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x36a5a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36a5a4: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a5a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a5a8: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a5ac: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a5acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a5b0: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a5b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a5b4: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a5b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a5b8: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a5b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a5bc: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a5bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a5c0: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x36a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a5c4: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a5c8: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x36a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a5cc: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x36a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a5d0: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x36a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36a5d4: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x36a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x36a5d8: 0x42000038  ei
    ctx->pc = 0x36a5d8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36a5dc:
    // 0x36a5dc: 0x42000039  di
    ctx->pc = 0x36a5dcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a5e0: 0x40f  sync.p
    ctx->pc = 0x36a5e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a5e4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a5e8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a5ec: 0x0  nop
    ctx->pc = 0x36a5ecu;
    // NOP
    // 0x36a5f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A5F0u;
    {
        const bool branch_taken_0x36a5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a5f0) {
            ctx->pc = 0x36A5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a5dc;
        }
    }
    ctx->pc = 0x36A5F8u;
    // 0x36a5f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36a5f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36a5fc: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x36a5fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36a600: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x36a600u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36a604: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x36a604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x36a608: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a60c: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a610: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a614: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a618: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a618u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a61c: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a61cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a620: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a620u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a624: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36a624u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a628: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x36a628u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a62c: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a630: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36a630u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a634: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x36a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x36a638: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x36a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x36a63c: 0x42000038  ei
    ctx->pc = 0x36a63cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36a640:
    // 0x36a640: 0x42000039  di
    ctx->pc = 0x36a640u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a644: 0x40f  sync.p
    ctx->pc = 0x36a644u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a648: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a64c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a650: 0x0  nop
    ctx->pc = 0x36a650u;
    // NOP
    // 0x36a654: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A654u;
    {
        const bool branch_taken_0x36a654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a654) {
            ctx->pc = 0x36A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a640;
        }
    }
    ctx->pc = 0x36A65Cu;
    // 0x36a65c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x36a65cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36a660: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x36a660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x36a664: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x36a664u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x36a668: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x36a668u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x36a66c: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a66cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a670: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a674: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a678: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a67c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a67cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a680: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a680u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a684: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a688: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36a688u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a68c: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x36a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a690: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36a690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a694: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36a694u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a698: 0x250400c0  addiu       $a0, $t0, 0xC0
    ctx->pc = 0x36a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x36a69c: 0x24c300c0  addiu       $v1, $a2, 0xC0
    ctx->pc = 0x36a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x36a6a0: 0x42000038  ei
    ctx->pc = 0x36a6a0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36a6a4:
    // 0x36a6a4: 0x42000039  di
    ctx->pc = 0x36a6a4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a6a8: 0x40f  sync.p
    ctx->pc = 0x36a6a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a6ac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a6b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36a6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36a6b4: 0x0  nop
    ctx->pc = 0x36a6b4u;
    // NOP
    // 0x36a6b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A6B8u;
    {
        const bool branch_taken_0x36a6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a6b8) {
            ctx->pc = 0x36A6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a6a4;
        }
    }
    ctx->pc = 0x36A6C0u;
    // 0x36a6c0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36a6c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36a6c4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x36a6c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36a6c8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x36a6c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36a6cc: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x36a6ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x36a6d0: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a6d4: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a6d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a6d8: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a6dc: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a6e0: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a6e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a6e4: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a6e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a6e8: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a6e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a6ec: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a6f0: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x36a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a6f4: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a6f8: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a6fc: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x36a6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x36a700: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x36a700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x36a704: 0x42000038  ei
    ctx->pc = 0x36a704u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a708: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x36a708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x36a70c: 0x1540ff9a  bnez        $t2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x36A70Cu;
    {
        const bool branch_taken_0x36a70c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a70c) {
            ctx->pc = 0x36A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a578;
        }
    }
    ctx->pc = 0x36A714u;
    // 0x36a714: 0x0  nop
    ctx->pc = 0x36a714u;
    // NOP
label_36a718:
    // 0x36a718: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a71c: 0x0  nop
    ctx->pc = 0x36a71cu;
    // NOP
label_36a720:
    // 0x36a720: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36a724: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36a724u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x36a728: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36a728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36a72c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36A72Cu;
    {
        const bool branch_taken_0x36a72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A72Cu;
        // 0x36a730: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a72c) {
            ctx->pc = 0x36A764u;
            goto label_36a764;
        }
    }
    ctx->pc = 0x36A734u;
    // 0x36a734: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a738: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36a73c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36a73cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36a740: 0xf  sync
    ctx->pc = 0x36a740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a744: 0x40f  sync.p
    ctx->pc = 0x36a744u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a748:
    // 0x36a748: 0x0  nop
    ctx->pc = 0x36a748u;
    // NOP
    // 0x36a74c: 0x0  nop
    ctx->pc = 0x36a74cu;
    // NOP
    // 0x36a750: 0x0  nop
    ctx->pc = 0x36a750u;
    // NOP
    // 0x36a754: 0x0  nop
    ctx->pc = 0x36a754u;
    // NOP
    // 0x36a758: 0x0  nop
    ctx->pc = 0x36a758u;
    // NOP
    // 0x36a75c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A75Cu;
    {
        const bool branch_taken_0x36a75c = (false);
        if (branch_taken_0x36a75c) {
            ctx->pc = 0x36A748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a748;
        }
    }
    ctx->pc = 0x36A764u;
label_36a764:
    // 0x36a764: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a768: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x36a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x36a76c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x36a770: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36a770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36a774: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x36A774u;
    {
        const bool branch_taken_0x36a774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A774u;
        // 0x36a778: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a774) {
            ctx->pc = 0x36A7D4u;
            goto label_36a7d4;
        }
    }
    ctx->pc = 0x36A77Cu;
    // 0x36a77c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36a780: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36a784: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36a784u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36a788: 0xf  sync
    ctx->pc = 0x36a788u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a78c: 0x40f  sync.p
    ctx->pc = 0x36a78cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36a790:
    // 0x36a790: 0x0  nop
    ctx->pc = 0x36a790u;
    // NOP
    // 0x36a794: 0x0  nop
    ctx->pc = 0x36a794u;
    // NOP
    // 0x36a798: 0x0  nop
    ctx->pc = 0x36a798u;
    // NOP
    // 0x36a79c: 0x0  nop
    ctx->pc = 0x36a79cu;
    // NOP
    // 0x36a7a0: 0x0  nop
    ctx->pc = 0x36a7a0u;
    // NOP
    // 0x36a7a4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A7A4u;
    {
        const bool branch_taken_0x36a7a4 = (false);
        if (branch_taken_0x36a7a4) {
            ctx->pc = 0x36A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a790;
        }
    }
    ctx->pc = 0x36A7ACu;
    // 0x36a7ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a7b0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36a7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36a7b4: 0x0  nop
    ctx->pc = 0x36a7b4u;
    // NOP
label_36a7b8:
    // 0x36a7b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36a7bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36a7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36a7c0: 0x0  nop
    ctx->pc = 0x36a7c0u;
    // NOP
    // 0x36a7c4: 0x0  nop
    ctx->pc = 0x36a7c4u;
    // NOP
    // 0x36a7c8: 0x0  nop
    ctx->pc = 0x36a7c8u;
    // NOP
    // 0x36a7cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A7CCu;
    {
        const bool branch_taken_0x36a7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a7cc) {
            ctx->pc = 0x36A7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a7b8;
        }
    }
    ctx->pc = 0x36A7D4u;
label_36a7d4:
    // 0x36a7d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a7d8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x36a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a7dc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36a7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x36a7e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a7e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36a7e4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x36a7e8: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x36a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x36a7ec: 0x24041fc0  addiu       $a0, $zero, 0x1FC0
    ctx->pc = 0x36a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x36a7f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a7f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36a7f4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x36a7f8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x36a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x36a7fc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x36a7fcu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x36a800: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36a800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36a804: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x36a804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x36a808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36a808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36a80c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x36a80cu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 9)); // MMIO: 0x1000d020
    // 0x36a810: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36a810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36a814: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36a814u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x36a818: 0xf  sync
    ctx->pc = 0x36a818u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a81c: 0x40f  sync.p
    ctx->pc = 0x36a81cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a820: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x36A820u;
    {
        const bool branch_taken_0x36a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A820u;
        // 0x36a824: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a820) {
            ctx->pc = 0x36AB8Cu;
            goto label_36ab8c;
        }
    }
    ctx->pc = 0x36A828u;
label_36a828:
    // 0x36a828: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x36a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a82c: 0xc6610068  lwc1        $f1, 0x68($s3)
    ctx->pc = 0x36a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a830: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x36a830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36a834: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x36a834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a838: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x36a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_36a83c:
    // 0x36a83c: 0x42000039  di
    ctx->pc = 0x36a83cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a840: 0x40f  sync.p
    ctx->pc = 0x36a840u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a844: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x36a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x36a848: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x36a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36a84c: 0x0  nop
    ctx->pc = 0x36a84cu;
    // NOP
    // 0x36a850: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A850u;
    {
        const bool branch_taken_0x36a850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a850) {
            ctx->pc = 0x36A83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a83c;
        }
    }
    ctx->pc = 0x36A858u;
    // 0x36a858: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x36a858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x36a85c: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x36a85cu;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36a860: 0x4a0002ff  vnop
    ctx->pc = 0x36a860u;
    // NOP operation, no action needed for VU0
    // 0x36a864: 0x4a0002ff  vnop
    ctx->pc = 0x36a864u;
    // NOP operation, no action needed for VU0
    // 0x36a868: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36a868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a86c: 0x4be00962  vaddi.xyzw  $vf5, $vf1, $I
    ctx->pc = 0x36a86cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36a870: 0x42000038  ei
    ctx->pc = 0x36a870u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a874: 0x1a4000c4  blez        $s2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x36A874u;
    {
        const bool branch_taken_0x36a874 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x36A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A874u;
        // 0x36a878: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a874) {
            ctx->pc = 0x36AB88u;
            goto label_36ab88;
        }
    }
    ctx->pc = 0x36A87Cu;
    // 0x36a87c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x36a87cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a880: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x36a880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36a884: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x36a884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x36a888: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x36A888u;
    {
        const bool branch_taken_0x36a888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A888u;
        // 0x36a88c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a888) {
            ctx->pc = 0x36A9E8u;
            goto label_36a9e8;
        }
    }
    ctx->pc = 0x36A890u;
    // 0x36a890: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x36a890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a894: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x36A894u;
    {
        const bool branch_taken_0x36a894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A894u;
        // 0x36a898: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a894) {
            ctx->pc = 0x36A978u;
            goto label_36a978;
        }
    }
    ctx->pc = 0x36A89Cu;
    // 0x36a89c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36A89Cu;
    {
        const bool branch_taken_0x36a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a89c) {
            ctx->pc = 0x36A910u;
            goto label_36a910;
        }
    }
    ctx->pc = 0x36A8A4u;
label_36a8a4:
    // 0x36a8a4: 0x42000039  di
    ctx->pc = 0x36a8a4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a8a8: 0x40f  sync.p
    ctx->pc = 0x36a8a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a8ac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a8b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36a8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36a8b4: 0x0  nop
    ctx->pc = 0x36a8b4u;
    // NOP
    // 0x36a8b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A8B8u;
    {
        const bool branch_taken_0x36a8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a8b8) {
            ctx->pc = 0x36A8A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a8a4;
        }
    }
    ctx->pc = 0x36A8C0u;
    // 0x36a8c0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36a8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a8c4: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36a8c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36a8c8: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36a8c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36a8cc: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36a8ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36a8d0: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a8d4: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a8d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a8d8: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a8d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a8dc: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a8dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a8e0: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a8e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a8e4: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a8e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a8e8: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a8e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a8ec: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a8f0: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a8f4: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a8f8: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a8fc: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36a8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36a900: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36a900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36a904: 0x42000038  ei
    ctx->pc = 0x36a904u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a908: 0x264affff  addiu       $t2, $s2, -0x1
    ctx->pc = 0x36a908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x36a90c: 0x0  nop
    ctx->pc = 0x36a90cu;
    // NOP
label_36a910:
    // 0x36a910: 0x42000039  di
    ctx->pc = 0x36a910u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a914: 0x40f  sync.p
    ctx->pc = 0x36a914u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a918: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a91c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36a91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36a920: 0x0  nop
    ctx->pc = 0x36a920u;
    // NOP
    // 0x36a924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A924u;
    {
        const bool branch_taken_0x36a924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a924) {
            ctx->pc = 0x36A910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a910;
        }
    }
    ctx->pc = 0x36A92Cu;
    // 0x36a92c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36a92cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a930: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36a930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36a934: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36a934u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36a938: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36a938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36a93c: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a940: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a944: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a948: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a94c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a94cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a950: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a954: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a958: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36a958u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a95c: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a960: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36a960u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a964: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36a964u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a968: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36a968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36a96c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36a96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36a970: 0x42000038  ei
    ctx->pc = 0x36a970u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a974: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x36a974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_36a978:
    // 0x36a978: 0x42000039  di
    ctx->pc = 0x36a978u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a97c: 0x40f  sync.p
    ctx->pc = 0x36a97cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a980: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a984: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36a988: 0x0  nop
    ctx->pc = 0x36a988u;
    // NOP
    // 0x36a98c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A98Cu;
    {
        const bool branch_taken_0x36a98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a98c) {
            ctx->pc = 0x36A978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a978;
        }
    }
    ctx->pc = 0x36A994u;
    // 0x36a994: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36a994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a998: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36a998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36a99c: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36a99cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36a9a0: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36a9a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36a9a4: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36a9a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36a9a8: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36a9a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36a9ac: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36a9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36a9b0: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36a9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36a9b4: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36a9b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36a9b8: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36a9b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36a9bc: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36a9bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36a9c0: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36a9c4: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36a9c8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36a9cc: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36a9d0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36a9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36a9d4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36a9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36a9d8: 0x42000038  ei
    ctx->pc = 0x36a9d8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36a9dc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x36a9dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x36a9e0: 0x5140006a  beql        $t2, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x36A9E0u;
    {
        const bool branch_taken_0x36a9e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a9e0) {
            ctx->pc = 0x36A9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A9E0u;
            // 0x36a9e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36AB8Cu;
            goto label_36ab8c;
        }
    }
    ctx->pc = 0x36A9E8u;
label_36a9e8:
    // 0x36a9e8: 0x42000039  di
    ctx->pc = 0x36a9e8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36a9ec: 0x40f  sync.p
    ctx->pc = 0x36a9ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36a9f0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36a9f4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36a9f8: 0x0  nop
    ctx->pc = 0x36a9f8u;
    // NOP
    // 0x36a9fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A9FCu;
    {
        const bool branch_taken_0x36a9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a9fc) {
            ctx->pc = 0x36A9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a9e8;
        }
    }
    ctx->pc = 0x36AA04u;
    // 0x36aa04: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36aa04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36aa08: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36aa08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36aa0c: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36aa0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36aa10: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36aa10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36aa14: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36aa14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36aa18: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36aa18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36aa1c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36aa1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36aa20: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36aa20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36aa24: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36aa24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36aa28: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36aa28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36aa2c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36aa2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36aa30: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36aa30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36aa34: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36aa38: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36aa3c: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36aa40: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36aa40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36aa44: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36aa44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36aa48: 0x42000038  ei
    ctx->pc = 0x36aa48u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36aa4c:
    // 0x36aa4c: 0x42000039  di
    ctx->pc = 0x36aa4cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36aa50: 0x40f  sync.p
    ctx->pc = 0x36aa50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36aa54: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36aa58: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36aa5c: 0x0  nop
    ctx->pc = 0x36aa5cu;
    // NOP
    // 0x36aa60: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AA60u;
    {
        const bool branch_taken_0x36aa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36aa60) {
            ctx->pc = 0x36AA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36aa4c;
        }
    }
    ctx->pc = 0x36AA68u;
    // 0x36aa68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36aa68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36aa6c: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36aa6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36aa70: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36aa70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36aa74: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36aa74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36aa78: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36aa78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36aa7c: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36aa7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36aa80: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36aa80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36aa84: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36aa84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36aa88: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36aa88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36aa8c: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36aa8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36aa90: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36aa90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36aa94: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36aa94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36aa98: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36aa9c: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36aaa0: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36aaa4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36aaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36aaa8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36aaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36aaac: 0x42000038  ei
    ctx->pc = 0x36aaacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36aab0:
    // 0x36aab0: 0x42000039  di
    ctx->pc = 0x36aab0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36aab4: 0x40f  sync.p
    ctx->pc = 0x36aab4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36aab8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36aabc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36aac0: 0x0  nop
    ctx->pc = 0x36aac0u;
    // NOP
    // 0x36aac4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AAC4u;
    {
        const bool branch_taken_0x36aac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36aac4) {
            ctx->pc = 0x36AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36aab0;
        }
    }
    ctx->pc = 0x36AACCu;
    // 0x36aacc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36aaccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36aad0: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36aad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36aad4: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36aad4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36aad8: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36aad8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36aadc: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36aadcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36aae0: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36aae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36aae4: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36aae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36aae8: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36aae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36aaec: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36aaecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36aaf0: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36aaf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36aaf4: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36aaf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36aaf8: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36aafc: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36ab00: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36ab04: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36ab08: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36ab08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36ab0c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36ab0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36ab10: 0x42000038  ei
    ctx->pc = 0x36ab10u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36ab14:
    // 0x36ab14: 0x42000039  di
    ctx->pc = 0x36ab14u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36ab18: 0x40f  sync.p
    ctx->pc = 0x36ab18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ab1c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36ab20: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36ab24: 0x0  nop
    ctx->pc = 0x36ab24u;
    // NOP
    // 0x36ab28: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AB28u;
    {
        const bool branch_taken_0x36ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ab28) {
            ctx->pc = 0x36AB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ab14;
        }
    }
    ctx->pc = 0x36AB30u;
    // 0x36ab30: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36ab30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ab34: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x36ab34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36ab38: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x36ab38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36ab3c: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x36ab3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36ab40: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x36ab40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36ab44: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x36ab44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36ab48: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36ab48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36ab4c: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36ab4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36ab50: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36ab50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36ab54: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36ab54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36ab58: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36ab58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36ab5c: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36ab60: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36ab64: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x36ab64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36ab68: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x36ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36ab6c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36ab6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36ab70: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36ab70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36ab74: 0x42000038  ei
    ctx->pc = 0x36ab74u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36ab78: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x36ab78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x36ab7c: 0x1540ff9a  bnez        $t2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x36AB7Cu;
    {
        const bool branch_taken_0x36ab7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ab7c) {
            ctx->pc = 0x36A9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a9e8;
        }
    }
    ctx->pc = 0x36AB84u;
    // 0x36ab84: 0x0  nop
    ctx->pc = 0x36ab84u;
    // NOP
label_36ab88:
    // 0x36ab88: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x36ab88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_36ab8c:
    // 0x36ab8c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x36ab8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36ab90: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x36ab90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36ab94: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x36ab94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36ab98: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36ab98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ab9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36ab9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36aba0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x36aba0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36aba4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x36aba4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36aba8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x36aba8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36abac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36abacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABB0u;
        // 0x36abb4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ABB8u;
}
