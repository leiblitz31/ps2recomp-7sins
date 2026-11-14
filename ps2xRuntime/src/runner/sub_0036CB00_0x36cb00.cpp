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

// Function: sub_0036CB00
// Address: 0x36cb00 - 0x36cc90
void sub_0036CB00_0x36cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CB00_0x36cb00");
#endif

    switch (ctx->pc) {
        case 0x36cb58u: goto label_36cb58;
        case 0x36cbd8u: goto label_36cbd8;
        default: break;
    }

    ctx->pc = 0x36cb00u;

    // 0x36cb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36cb04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36cb08: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36cb0c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36cb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36cb10: 0x14e20013  bne         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x36CB10u;
    {
        const bool branch_taken_0x36cb10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x36CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB10u;
        // 0x36cb14: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb10) {
            ctx->pc = 0x36CB60u;
            goto label_36cb60;
        }
    }
    ctx->pc = 0x36CB18u;
    // 0x36cb18: 0xc5230094  lwc1        $f3, 0x94($t1)
    ctx->pc = 0x36cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36cb1c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x36cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x36cb20: 0xc5220090  lwc1        $f2, 0x90($t1)
    ctx->pc = 0x36cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36cb24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36cb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb28: 0xc520009c  lwc1        $f0, 0x9C($t1)
    ctx->pc = 0x36cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cb2c: 0xc5210098  lwc1        $f1, 0x98($t1)
    ctx->pc = 0x36cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cb30: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36cb34: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x36cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x36cb38: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x36cb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36cb3c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x36cb3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36cb40: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x36cb40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x36cb44: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x36cb44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36cb48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x36cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36cb4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x36cb4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36cb50: 0xc0d4dd8  jal         func_353760
    ctx->pc = 0x36CB50u;
    SET_GPR_U32(ctx, 31, 0x36CB58u);
    ctx->pc = 0x36CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB50u;
    // 0x36cb54: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x353760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353760u, 0x36CB50u, 0x36CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB58u;
label_36cb58:
    // 0x36cb58: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x36CB58u;
    {
        const bool branch_taken_0x36cb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB58u;
        // 0x36cb5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb58) {
            ctx->pc = 0x36CC84u;
            goto label_36cc84;
        }
    }
    ctx->pc = 0x36CB60u;
label_36cb60:
    // 0x36cb60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36cb64: 0x25280090  addiu       $t0, $t1, 0x90
    ctx->pc = 0x36cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x36cb68: 0x18a00045  blez        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x36CB68u;
    {
        const bool branch_taken_0x36cb68 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB68u;
        // 0x36cb6c: 0x25260098  addiu       $a2, $t1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb68) {
            ctx->pc = 0x36CC80u;
            goto label_36cc80;
        }
    }
    ctx->pc = 0x36CB70u;
    // 0x36cb70: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x36cb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36cb74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36CB74u;
    {
        const bool branch_taken_0x36cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB74u;
        // 0x36cb78: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb74) {
            ctx->pc = 0x36CBD8u;
            goto label_36cbd8;
        }
    }
    ctx->pc = 0x36CB7Cu;
    // 0x36cb7c: 0xc5210090  lwc1        $f1, 0x90($t1)
    ctx->pc = 0x36cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cb80: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36cb84: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36cb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cb88: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cb8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cb90: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36cb94: 0xc5200098  lwc1        $f0, 0x98($t1)
    ctx->pc = 0x36cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cb98: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36cb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cb9c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cba0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36cba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cba4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36cba8: 0xc5200098  lwc1        $f0, 0x98($t1)
    ctx->pc = 0x36cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cbac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cbb0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x36cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cbb4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36cbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cbb8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36cbbc: 0xc5210090  lwc1        $f1, 0x90($t1)
    ctx->pc = 0x36cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cbc0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36cbc4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36cbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cbc8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x36cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cbcc: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x36CBCCu;
    {
        const bool branch_taken_0x36cbcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBCCu;
        // 0x36cbd0: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cbcc) {
            ctx->pc = 0x36CC80u;
            goto label_36cc80;
        }
    }
    ctx->pc = 0x36CBD4u;
    // 0x36cbd4: 0x0  nop
    ctx->pc = 0x36cbd4u;
    // NOP
label_36cbd8:
    // 0x36cbd8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x36cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cbdc: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x36cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x36cbe0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36cbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cbe4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cbe8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36cbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cbec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cbf0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cbf4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cbf8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cbfc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cbfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cc04: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cc08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cc0c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x36cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cc10: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc14: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cc18: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x36cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cc1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cc20: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x36cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cc24: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc28: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cc2c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x36cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cc30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cc34: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cc38: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc3c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cc40: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cc44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cc48: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cc4c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc50: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cc54: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cc58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cc5c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x36cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cc60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc64: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cc68: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x36cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cc6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cc70: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x36cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cc74: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cc74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cc78: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x36CC78u;
    {
        const bool branch_taken_0x36cc78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC78u;
        // 0x36cc7c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc78) {
            ctx->pc = 0x36CBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cbd8;
        }
    }
    ctx->pc = 0x36CC80u;
label_36cc80:
    // 0x36cc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36cc84:
    // 0x36cc84: 0x3e00008  jr          $ra
    ctx->pc = 0x36CC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC84u;
        // 0x36cc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CC8Cu;
    // 0x36cc8c: 0x0  nop
    ctx->pc = 0x36cc8cu;
    // NOP
    ctx->pc = 0x36cc90u;
}
