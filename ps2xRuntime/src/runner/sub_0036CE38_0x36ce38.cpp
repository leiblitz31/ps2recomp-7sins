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

// Function: sub_0036CE38
// Address: 0x36ce38 - 0x36cfd0
void sub_0036CE38_0x36ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CE38_0x36ce38");
#endif

    switch (ctx->pc) {
        case 0x36ced8u: goto label_36ced8;
        default: break;
    }

    ctx->pc = 0x36ce38u;

    // 0x36ce38: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x36ce38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ce3c: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x36ce3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x36ce40: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x36ce40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x36ce44: 0x18a00060  blez        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x36CE44u;
    {
        const bool branch_taken_0x36ce44 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE44u;
        // 0x36ce48: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce44) {
            ctx->pc = 0x36CFC8u;
            goto label_36cfc8;
        }
    }
    ctx->pc = 0x36CE4Cu;
    // 0x36ce4c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x36ce4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce50: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x36ce50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36ce54: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36CE54u;
    {
        const bool branch_taken_0x36ce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE54u;
        // 0x36ce58: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce54) {
            ctx->pc = 0x36CED8u;
            goto label_36ced8;
        }
    }
    ctx->pc = 0x36CE5Cu;
    // 0x36ce5c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x36ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ce60: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x36ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x36ce64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36ce68: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36ce68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ce6c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x36ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ce70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ce74: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x36ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ce78: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36ce78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ce7c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36ce80: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x36ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ce84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ce88: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x36ce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ce8c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ce8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ce90: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x36ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ce94: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ce94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ce98: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36ce9c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x36ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cea0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cea4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x36cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cea8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36cea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ceac: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x36ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ceb0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ceb4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36ceb8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x36ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cebc: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x36cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36cec0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36cec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cec4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x36cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cec8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cecc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x36ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ced0: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x36CED0u;
    {
        const bool branch_taken_0x36ced0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CED0u;
        // 0x36ced4: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ced0) {
            ctx->pc = 0x36CFC8u;
            goto label_36cfc8;
        }
    }
    ctx->pc = 0x36CED8u;
label_36ced8:
    // 0x36ced8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cedc: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x36cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x36cee0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36cee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cee4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cee8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36cee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ceec: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cef0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x36cef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cef4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cef8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cefc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cf00: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cf04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cf04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cf08: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf0c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cf10: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cf14: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cf1c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cf20: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cf24: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf28: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cf2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cf30: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf34: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cf38: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cf3c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cf3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cf40: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf44: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x36cf48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cf4c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cf50: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cf58: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cf5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cf60: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf64: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cf68: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cf6c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf70: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cf74: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cf78: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cf78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cf7c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf80: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cf84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cf88: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cf90: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cf94: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cf98: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cf9c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cfa0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cfa4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cfa8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cfac: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cfb0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cfb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cfb4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cfb8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36cfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x36cfbc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36cfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cfc0: 0x14a0ffc5  bnez        $a1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x36CFC0u;
    {
        const bool branch_taken_0x36cfc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CFC0u;
        // 0x36cfc4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cfc0) {
            ctx->pc = 0x36CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ced8;
        }
    }
    ctx->pc = 0x36CFC8u;
label_36cfc8:
    // 0x36cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x36CFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CFD0u;
}
