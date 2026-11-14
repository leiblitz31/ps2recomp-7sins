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

// Function: sub_00413A88
// Address: 0x413a88 - 0x413c58
void sub_00413A88_0x413a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413A88_0x413a88");
#endif

    switch (ctx->pc) {
        case 0x413b40u: goto label_413b40;
        default: break;
    }

    ctx->pc = 0x413a88u;

    // 0x413a88: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x413a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x413a8c: 0x4c00070  bltz        $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x413A8Cu;
    {
        const bool branch_taken_0x413a8c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x413A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A8Cu;
        // 0x413a90: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413a8c) {
            ctx->pc = 0x413C50u;
            goto label_413c50;
        }
    }
    ctx->pc = 0x413A94u;
    // 0x413a94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x413a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413a98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413a9c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x413A9Cu;
    {
        const bool branch_taken_0x413a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A9Cu;
        // 0x413aa0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413a9c) {
            ctx->pc = 0x413B2Cu;
            goto label_413b2c;
        }
    }
    ctx->pc = 0x413AA4u;
    // 0x413aa4: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x413aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413aa8: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x413aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x413aac: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x413aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x413ab0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x413ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x413ab4: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x413ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x413ab8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x413ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x413abc: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x413abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x413ac0: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x413ac0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x413ac4: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x413ac4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x413ac8: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x413ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413acc: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x413accu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x413ad0: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x413ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x413ad4: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x413ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413ad8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x413ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413adc: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x413adcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x413ae0: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x413ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413ae4: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413ae8: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x413ae8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x413aec: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x413aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413af0: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x413af0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x413af4: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x413af4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x413af8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x413af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x413afc: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x413afcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x413b00: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x413b00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x413b04: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x413b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x413b08: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x413b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413b0c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413b10: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x413b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x413b14: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x413b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x413b18: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x413b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413b1c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x413b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x413b20: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x413b20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x413b24: 0x4c0004a  bltz        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x413B24u;
    {
        const bool branch_taken_0x413b24 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x413B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413B24u;
        // 0x413b28: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x413b24) {
            ctx->pc = 0x413C50u;
            goto label_413c50;
        }
    }
    ctx->pc = 0x413B2Cu;
label_413b2c:
    // 0x413b2c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x413b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b30: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x413b30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b34: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x413b34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x413b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b3c: 0x0  nop
    ctx->pc = 0x413b3cu;
    // NOP
label_413b40:
    // 0x413b40: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x413b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413b44: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x413b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x413b48: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x413b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x413b4c: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x413b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x413b50: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x413b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x413b54: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x413b54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x413b58: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x413b58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x413b5c: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x413b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413b60: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x413b60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x413b64: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x413b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x413b68: 0xc5070004  lwc1        $f7, 0x4($t0)
    ctx->pc = 0x413b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413b6c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x413b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413b70: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x413b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x413b74: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x413b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413b78: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413b7c: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x413b7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x413b80: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x413b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413b84: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x413b84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x413b88: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x413b88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x413b8c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x413b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x413b90: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x413b90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x413b94: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x413b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x413b98: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x413b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x413b9c: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x413b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413ba0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413ba4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x413ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x413ba8: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x413ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x413bac: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x413bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413bb0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x413bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x413bb4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x413bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x413bb8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x413bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x413bbc: 0xc4a7000c  lwc1        $f7, 0xC($a1)
    ctx->pc = 0x413bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413bc0: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x413bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x413bc4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x413bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x413bc8: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x413bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x413bcc: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x413bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x413bd0: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x413bd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x413bd4: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x413bd4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x413bd8: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x413bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413bdc: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x413bdcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x413be0: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x413be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x413be4: 0xc5070010  lwc1        $f7, 0x10($t0)
    ctx->pc = 0x413be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413be8: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x413be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413bec: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x413becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x413bf0: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x413bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x413bf4: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x413bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413bf8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x413bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x413bfc: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x413bfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x413c00: 0xc4470014  lwc1        $f7, 0x14($v0)
    ctx->pc = 0x413c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413c04: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x413c04u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x413c08: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x413c08u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x413c0c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x413c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x413c10: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413c14: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x413c14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x413c18: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x413c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x413c1c: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x413c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x413c20: 0x25290018  addiu       $t1, $t1, 0x18
    ctx->pc = 0x413c20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x413c24: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x413c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413c28: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413c2c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x413c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x413c30: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x413c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x413c34: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x413c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x413c38: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x413c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413c3c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x413c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x413c40: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x413c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x413c44: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x413c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x413c48: 0x4c1ffbd  bgez        $a2, . + 4 + (-0x43 << 2)
    ctx->pc = 0x413C48u;
    {
        const bool branch_taken_0x413c48 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x413C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413C48u;
        // 0x413c4c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413c48) {
            ctx->pc = 0x413B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413b40;
        }
    }
    ctx->pc = 0x413C50u;
label_413c50:
    // 0x413c50: 0x3e00008  jr          $ra
    ctx->pc = 0x413C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413C50u;
        // 0x413c54: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413C58u;
}
