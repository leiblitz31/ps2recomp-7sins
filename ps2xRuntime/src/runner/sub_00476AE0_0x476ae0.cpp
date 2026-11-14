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

// Function: sub_00476AE0
// Address: 0x476ae0 - 0x476dc0
void sub_00476AE0_0x476ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476AE0_0x476ae0");
#endif

    switch (ctx->pc) {
        case 0x476b10u: goto label_476b10;
        case 0x476b5cu: goto label_476b5c;
        case 0x476bc0u: goto label_476bc0;
        case 0x476c9cu: goto label_476c9c;
        case 0x476cb4u: goto label_476cb4;
        case 0x476ce8u: goto label_476ce8;
        case 0x476d14u: goto label_476d14;
        case 0x476d28u: goto label_476d28;
        case 0x476d68u: goto label_476d68;
        case 0x476d74u: goto label_476d74;
        case 0x476d88u: goto label_476d88;
        case 0x476d9cu: goto label_476d9c;
        default: break;
    }

    ctx->pc = 0x476ae0u;

    // 0x476ae0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x476ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x476ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x476ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x476ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x476ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x476aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x476af0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x476af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x476af4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x476af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x476af8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x476af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x476afc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x476afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x476b00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x476b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x476b04: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476B04u;
    {
        const bool branch_taken_0x476b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x476b04) {
            ctx->pc = 0x476B2Cu;
            goto label_476b2c;
        }
    }
    ctx->pc = 0x476B0Cu;
    // 0x476b0c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x476b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_476b10:
    // 0x476b10: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x476b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x476b14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x476b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x476b18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x476b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x476b1c: 0x0  nop
    ctx->pc = 0x476b1cu;
    // NOP
    // 0x476b20: 0x0  nop
    ctx->pc = 0x476b20u;
    // NOP
    // 0x476b24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x476B24u;
    {
        const bool branch_taken_0x476b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476b24) {
            ctx->pc = 0x476B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476b10;
        }
    }
    ctx->pc = 0x476B2Cu;
label_476b2c:
    // 0x476b2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476b30: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x476b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476b34: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x476b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x476b38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476b3c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x476b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476b40: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x476b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x476b44: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x476b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x476b48: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x476b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x476b4c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x476b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x476b50: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476B50u;
    {
        const bool branch_taken_0x476b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x476b50) {
            ctx->pc = 0x476B78u;
            goto label_476b78;
        }
    }
    ctx->pc = 0x476B58u;
    // 0x476b58: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x476b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_476b5c:
    // 0x476b5c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x476b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x476b60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x476b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x476b64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x476b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x476b68: 0x0  nop
    ctx->pc = 0x476b68u;
    // NOP
    // 0x476b6c: 0x0  nop
    ctx->pc = 0x476b6cu;
    // NOP
    // 0x476b70: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x476B70u;
    {
        const bool branch_taken_0x476b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476b70) {
            ctx->pc = 0x476B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476b5c;
        }
    }
    ctx->pc = 0x476B78u;
label_476b78:
    // 0x476b78: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x476b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476b7c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x476b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x476b80: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x476b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476b84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x476b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476b88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x476b8c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x476b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x476b90: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x476b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476b94: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x476b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x476b98: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x476b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476b9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x476b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476ba0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x476ba4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x476ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x476ba8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x476ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x476bac: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x476bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x476bb0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x476bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x476bb4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476BB4u;
    {
        const bool branch_taken_0x476bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x476bb4) {
            ctx->pc = 0x476BDCu;
            goto label_476bdc;
        }
    }
    ctx->pc = 0x476BBCu;
    // 0x476bbc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x476bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_476bc0:
    // 0x476bc0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x476bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x476bc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x476bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x476bc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x476bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x476bcc: 0x0  nop
    ctx->pc = 0x476bccu;
    // NOP
    // 0x476bd0: 0x0  nop
    ctx->pc = 0x476bd0u;
    // NOP
    // 0x476bd4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x476BD4u;
    {
        const bool branch_taken_0x476bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476bd4) {
            ctx->pc = 0x476BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476bc0;
        }
    }
    ctx->pc = 0x476BDCu;
label_476bdc:
    // 0x476bdc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x476bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x476be0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x476be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x476be4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x476BE4u;
    {
        const bool branch_taken_0x476be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476be4) {
            ctx->pc = 0x476C04u;
            goto label_476c04;
        }
    }
    ctx->pc = 0x476BECu;
    // 0x476bec: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x476becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476bf0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x476bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476bf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x476bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x476bf8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x476bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x476bfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x476BFCu;
    {
        const bool branch_taken_0x476bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476bfc) {
            ctx->pc = 0x476C34u;
            goto label_476c34;
        }
    }
    ctx->pc = 0x476C04u;
label_476c04:
    // 0x476c04: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x476c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x476c08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x476c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x476c0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476C0Cu;
    {
        const bool branch_taken_0x476c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476c0c) {
            ctx->pc = 0x476C34u;
            goto label_476c34;
        }
    }
    ctx->pc = 0x476C14u;
    // 0x476c14: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x476c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476c18: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x476c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476c1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x476c1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x476c20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x476c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x476c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x476c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x476c28: 0x0  nop
    ctx->pc = 0x476c28u;
    // NOP
    // 0x476c2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x476c2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x476c30: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x476c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_476c34:
    // 0x476c34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x476c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x476c38: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x476c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x476c3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x476C3Cu;
    {
        const bool branch_taken_0x476c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476c3c) {
            ctx->pc = 0x476C5Cu;
            goto label_476c5c;
        }
    }
    ctx->pc = 0x476C44u;
    // 0x476c44: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x476c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476c48: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x476c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476c4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x476c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x476c50: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x476c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x476c54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x476C54u;
    {
        const bool branch_taken_0x476c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476c54) {
            ctx->pc = 0x476C8Cu;
            goto label_476c8c;
        }
    }
    ctx->pc = 0x476C5Cu;
label_476c5c:
    // 0x476c5c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x476c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x476c60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x476c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x476c64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476C64u;
    {
        const bool branch_taken_0x476c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476c64) {
            ctx->pc = 0x476C8Cu;
            goto label_476c8c;
        }
    }
    ctx->pc = 0x476C6Cu;
    // 0x476c6c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x476c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476c70: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x476c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476c74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x476c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x476c78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x476c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x476c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x476c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x476c80: 0x0  nop
    ctx->pc = 0x476c80u;
    // NOP
    // 0x476c84: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x476c84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x476c88: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x476c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_476c8c:
    // 0x476c8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476c90: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x476c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x476c94: 0xc0ed194  jal         func_3B4650
    ctx->pc = 0x476C94u;
    SET_GPR_U32(ctx, 31, 0x476C9Cu);
    ctx->pc = 0x3B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4650u, 0x476C94u, 0x476C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476C9Cu;
label_476c9c:
    // 0x476c9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476ca0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476ca4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x476ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x476ca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x476ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476cac: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x476CACu;
    SET_GPR_U32(ctx, 31, 0x476CB4u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x476CACu, 0x476CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476CB4u;
label_476cb4:
    // 0x476cb4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x476cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x476cb8: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x476cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x476cbc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x476cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x476cc0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x476cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476cc4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x476cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476cc8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x476cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x476ccc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x476cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x476cd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x476cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x476cd4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x476cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x476cd8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x476cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x476cdc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476CDCu;
    {
        const bool branch_taken_0x476cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x476cdc) {
            ctx->pc = 0x476D04u;
            goto label_476d04;
        }
    }
    ctx->pc = 0x476CE4u;
    // 0x476ce4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x476ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_476ce8:
    // 0x476ce8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x476ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x476cec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x476cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x476cf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x476cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x476cf4: 0x0  nop
    ctx->pc = 0x476cf4u;
    // NOP
    // 0x476cf8: 0x0  nop
    ctx->pc = 0x476cf8u;
    // NOP
    // 0x476cfc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x476CFCu;
    {
        const bool branch_taken_0x476cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476cfc) {
            ctx->pc = 0x476CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476ce8;
        }
    }
    ctx->pc = 0x476D04u;
label_476d04:
    // 0x476d04: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x476d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x476d08: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x476d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x476d0c: 0xc041d58  jal         func_107560
    ctx->pc = 0x476D0Cu;
    SET_GPR_U32(ctx, 31, 0x476D14u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x476D0Cu, 0x476D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476D14u;
label_476d14:
    // 0x476d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x476d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476d18: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x476d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x476d1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x476d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x476d20: 0xc103c86  jal         func_40F218
    ctx->pc = 0x476D20u;
    SET_GPR_U32(ctx, 31, 0x476D28u);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x476D20u, 0x476D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476D28u;
label_476d28:
    // 0x476d28: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x476d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476d2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x476d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x476d34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x476d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x476d38: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x476d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476d3c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x476d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x476d44: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x476d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x476d48: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x476d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476d4c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x476d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x476d54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x476d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x476d58: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x476d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x476d5c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x476d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x476d60: 0xc041d58  jal         func_107560
    ctx->pc = 0x476D60u;
    SET_GPR_U32(ctx, 31, 0x476D68u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x476D60u, 0x476D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476D68u;
label_476d68:
    // 0x476d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x476d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476d6c: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x476D6Cu;
    SET_GPR_U32(ctx, 31, 0x476D74u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x476D6Cu, 0x476D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476D74u;
label_476d74:
    // 0x476d74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476d78: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x476d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x476d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x476d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476d80: 0xc0ed196  jal         func_3B4658
    ctx->pc = 0x476D80u;
    SET_GPR_U32(ctx, 31, 0x476D88u);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x476D80u, 0x476D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476D88u;
label_476d88:
    // 0x476d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x476d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476d8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476d90: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x476d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x476d94: 0xc0ed18e  jal         func_3B4638
    ctx->pc = 0x476D94u;
    SET_GPR_U32(ctx, 31, 0x476D9Cu);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x476D94u, 0x476D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476D9Cu;
label_476d9c:
    // 0x476d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x476da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x476da8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x476da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x476dac: 0x3e00008  jr          $ra
    ctx->pc = 0x476DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476DB4u;
    // 0x476db4: 0x0  nop
    ctx->pc = 0x476db4u;
    // NOP
    // 0x476db8: 0x0  nop
    ctx->pc = 0x476db8u;
    // NOP
    // 0x476dbc: 0x0  nop
    ctx->pc = 0x476dbcu;
    // NOP
    ctx->pc = 0x476dc0u;
}
