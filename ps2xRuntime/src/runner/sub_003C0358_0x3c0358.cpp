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

// Function: sub_003C0358
// Address: 0x3c0358 - 0x3c0828
void sub_003C0358_0x3c0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0358_0x3c0358");
#endif

    switch (ctx->pc) {
        case 0x3c0648u: goto label_3c0648;
        case 0x3c0654u: goto label_3c0654;
        case 0x3c0660u: goto label_3c0660;
        case 0x3c066cu: goto label_3c066c;
        case 0x3c07f8u: goto label_3c07f8;
        case 0x3c0804u: goto label_3c0804;
        case 0x3c0810u: goto label_3c0810;
        default: break;
    }

    ctx->pc = 0x3c0358u;

    // 0x3c0358: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c0358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3c035c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3c0360: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c0360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3c0364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3c0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3c036c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c036cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0370: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x3c0370u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c0374: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0378: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c037c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C037Cu;
    {
        const bool branch_taken_0x3c037c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C037Cu;
        // 0x3c0380: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c037c) {
            ctx->pc = 0x3C03A8u;
            goto label_3c03a8;
        }
    }
    ctx->pc = 0x3C0384u;
    // 0x3c0384: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c0388: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c0388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c038c: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c038cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c0390: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c0390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0394: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c0398: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c0398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c039c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c039cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c03a0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c03a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3c03a4: 0x0  nop
    ctx->pc = 0x3c03a4u;
    // NOP
label_3c03a8:
    // 0x3c03a8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x3c03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x3c03ac: 0x9625000a  lhu         $a1, 0xA($s1)
    ctx->pc = 0x3c03acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3c03b0: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c03b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c03b4: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c03b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c03b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C03B8u;
    {
        const bool branch_taken_0x3c03b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03B8u;
        // 0x3c03bc: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c03b8) {
            ctx->pc = 0x3C03E0u;
            goto label_3c03e0;
        }
    }
    ctx->pc = 0x3C03C0u;
    // 0x3c03c0: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c03c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c03c4: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c03c8: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c03cc: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c03d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c03d4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c03d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c03d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c03dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c03dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c03e0:
    // 0x3c03e0: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x3c03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x3c03e4: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x3c03e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c03e8: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c03e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c03ec: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c03ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c03f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C03F0u;
    {
        const bool branch_taken_0x3c03f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03F0u;
        // 0x3c03f4: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c03f0) {
            ctx->pc = 0x3C0418u;
            goto label_3c0418;
        }
    }
    ctx->pc = 0x3C03F8u;
    // 0x3c03f8: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c03f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c03fc: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0400: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c0404: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c0404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0408: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c040c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0410: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c0414: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c0414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0418:
    // 0x3c0418: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x3c0418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x3c041c: 0x9625000e  lhu         $a1, 0xE($s1)
    ctx->pc = 0x3c041cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c0420: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0424: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0428: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0428u;
    {
        const bool branch_taken_0x3c0428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0428u;
        // 0x3c042c: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0428) {
            ctx->pc = 0x3C0450u;
            goto label_3c0450;
        }
    }
    ctx->pc = 0x3C0430u;
    // 0x3c0430: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c0434: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c0434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0438: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c043c: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0440: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c0444: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c0444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0448: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c044c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c044cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0450:
    // 0x3c0450: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x3c0450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x3c0454: 0xc7a8002c  lwc1        $f8, 0x2C($sp)
    ctx->pc = 0x3c0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c0458: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3c0458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c045c: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x3c045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c0460: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x3c0460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3c0464: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x3c0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c0468: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x3c0468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3c046c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x3c046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c0470: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x3c0470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x3c0474: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x3c0474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3c0478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c0478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c047c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c047cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c0480: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c0480u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c0484: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x3c0484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c0488: 0x0  nop
    ctx->pc = 0x3c0488u;
    // NOP
    // 0x3c048c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x3C048Cu;
    {
        const bool branch_taken_0x3c048c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c048c) {
            ctx->pc = 0x3C0490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C048Cu;
            // 0x3c0490: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C04C8u;
            goto label_3c04c8;
        }
    }
    ctx->pc = 0x3C0494u;
    // 0x3c0494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c049c: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x3c049cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3c04a0: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x3c04a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x3c04a4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x3c04a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x3c04a8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3c04a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3c04ac: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x3c04acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x3c04b0: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x3c04b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3c04b4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3c04b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c04b8: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x3c04b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3c04bc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3c04bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c04c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3c04c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c04c4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3c04c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_3c04c8:
    // 0x3c04c8: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c04c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c04cc: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c04ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c04d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C04D0u;
    {
        const bool branch_taken_0x3c04d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04D0u;
        // 0x3c04d4: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04d0) {
            ctx->pc = 0x3C04F8u;
            goto label_3c04f8;
        }
    }
    ctx->pc = 0x3C04D8u;
    // 0x3c04d8: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c04d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c04dc: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c04e0: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c04e4: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c04e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c04e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c04ec: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c04f0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c04f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c04f4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c04f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c04f8:
    // 0x3c04f8: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3c04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x3c04fc: 0x9605000a  lhu         $a1, 0xA($s0)
    ctx->pc = 0x3c04fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3c0500: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0504: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0508: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0508u;
    {
        const bool branch_taken_0x3c0508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0508u;
        // 0x3c050c: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0508) {
            ctx->pc = 0x3C0530u;
            goto label_3c0530;
        }
    }
    ctx->pc = 0x3C0510u;
    // 0x3c0510: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c0514: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c0514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0518: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c051c: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0520: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c0524: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c0524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0528: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c052c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c052cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0530:
    // 0x3c0530: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x3c0530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x3c0534: 0x9605000c  lhu         $a1, 0xC($s0)
    ctx->pc = 0x3c0534u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c0538: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c053c: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0540: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0540u;
    {
        const bool branch_taken_0x3c0540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0540u;
        // 0x3c0544: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0540) {
            ctx->pc = 0x3C0568u;
            goto label_3c0568;
        }
    }
    ctx->pc = 0x3C0548u;
    // 0x3c0548: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c054c: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c054cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0550: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c0554: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c0554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0558: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c055c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c055cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0560: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c0564: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c0564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0568:
    // 0x3c0568: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x3c0568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x3c056c: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x3c056cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3c0570: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0574: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0578: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0578u;
    {
        const bool branch_taken_0x3c0578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0578u;
        // 0x3c057c: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0578) {
            ctx->pc = 0x3C05A0u;
            goto label_3c05a0;
        }
    }
    ctx->pc = 0x3C0580u;
    // 0x3c0580: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c0584: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c0584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0588: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c058c: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c058cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0590: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c0594: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c0594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0598: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c059c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c059cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c05a0:
    // 0x3c05a0: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x3c05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x3c05a4: 0xc7ad000c  lwc1        $f13, 0xC($sp)
    ctx->pc = 0x3c05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3c05a8: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x3c05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c05ac: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x3c05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c05b0: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x3c05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c05b4: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x3c05b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c05b8: 0x46054842  mul.s       $f1, $f9, $f5
    ctx->pc = 0x3c05b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x3c05bc: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x3c05bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c05c0: 0x46065102  mul.s       $f4, $f10, $f6
    ctx->pc = 0x3c05c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x3c05c4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x3c05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c05c8: 0xc7ab001c  lwc1        $f11, 0x1C($sp)
    ctx->pc = 0x3c05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3c05cc: 0x46033882  mul.s       $f2, $f7, $f3
    ctx->pc = 0x3c05ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3c05d0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c05d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c05d4: 0x460b6802  mul.s       $f0, $f13, $f11
    ctx->pc = 0x3c05d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x3c05d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c05d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c05dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c05dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c05e0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3c05e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3c05e4: 0x46035302  mul.s       $f12, $f10, $f3
    ctx->pc = 0x3c05e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x3c05e8: 0x46063a02  mul.s       $f8, $f7, $f6
    ctx->pc = 0x3c05e8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x3c05ec: 0x46053842  mul.s       $f1, $f7, $f5
    ctx->pc = 0x3c05ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x3c05f0: 0x46034902  mul.s       $f4, $f9, $f3
    ctx->pc = 0x3c05f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x3c05f4: 0x46064802  mul.s       $f0, $f9, $f6
    ctx->pc = 0x3c05f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x3c05f8: 0x46055082  mul.s       $f2, $f10, $f5
    ctx->pc = 0x3c05f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x3c05fc: 0x46086301  sub.s       $f12, $f12, $f8
    ctx->pc = 0x3c05fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x3c0600: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3c0600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c0604: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3c0604u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3c0608: 0x460d2942  mul.s       $f5, $f5, $f13
    ctx->pc = 0x3c0608u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x3c060c: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x3c060cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x3c0610: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x3c0610u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x3c0614: 0x46056300  add.s       $f12, $f12, $f5
    ctx->pc = 0x3c0614u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[5]);
    // 0x3c0618: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c0618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c061c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3c061cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3c0620: 0x460b4a42  mul.s       $f9, $f9, $f11
    ctx->pc = 0x3c0620u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x3c0624: 0x460b39c2  mul.s       $f7, $f7, $f11
    ctx->pc = 0x3c0624u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x3c0628: 0x460b5282  mul.s       $f10, $f10, $f11
    ctx->pc = 0x3c0628u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x3c062c: 0x46096300  add.s       $f12, $f12, $f9
    ctx->pc = 0x3c062cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x3c0630: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c0630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c0634: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x3c0634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x3c0638: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x3c0638u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c063c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c0640: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0640u;
    SET_GPR_U32(ctx, 31, 0x3C0648u);
    ctx->pc = 0x3C0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0640u;
    // 0x3c0644: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0640u, 0x3C0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0648u;
label_3c0648:
    // 0x3c0648: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x3c0648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c064c: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C064Cu;
    SET_GPR_U32(ctx, 31, 0x3C0654u);
    ctx->pc = 0x3C0650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C064Cu;
    // 0x3c0650: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C064Cu, 0x3C0654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0654u;
label_3c0654:
    // 0x3c0654: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x3c0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0658: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0658u;
    SET_GPR_U32(ctx, 31, 0x3C0660u);
    ctx->pc = 0x3C065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0658u;
    // 0x3c065c: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0658u, 0x3C0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0660u;
label_3c0660:
    // 0x3c0660: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x3c0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0664: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0664u;
    SET_GPR_U32(ctx, 31, 0x3C066Cu);
    ctx->pc = 0x3C0668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0664u;
    // 0x3c0668: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0664u, 0x3C066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C066Cu;
label_3c066c:
    // 0x3c066c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x3c066cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c0670: 0x96250010  lhu         $a1, 0x10($s1)
    ctx->pc = 0x3c0670u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c0674: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0678: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c067c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C067Cu;
    {
        const bool branch_taken_0x3c067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C067Cu;
        // 0x3c0680: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c067c) {
            ctx->pc = 0x3C06A8u;
            goto label_3c06a8;
        }
    }
    ctx->pc = 0x3C0684u;
    // 0x3c0684: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c0688: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c0688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c068c: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c0690: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c0690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c0698: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c0698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c069c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c069cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c06a0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c06a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3c06a4: 0x0  nop
    ctx->pc = 0x3c06a4u;
    // NOP
label_3c06a8:
    // 0x3c06a8: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x3c06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x3c06ac: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x3c06acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3c06b0: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c06b4: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c06b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c06b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C06B8u;
    {
        const bool branch_taken_0x3c06b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06B8u;
        // 0x3c06bc: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06b8) {
            ctx->pc = 0x3C06E0u;
            goto label_3c06e0;
        }
    }
    ctx->pc = 0x3C06C0u;
    // 0x3c06c0: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c06c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c06c4: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c06c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c06c8: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c06cc: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c06ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c06d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c06d4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c06d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c06d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c06dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c06dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c06e0:
    // 0x3c06e0: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x3c06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x3c06e4: 0x96250014  lhu         $a1, 0x14($s1)
    ctx->pc = 0x3c06e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3c06e8: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c06ec: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c06ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c06f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C06F0u;
    {
        const bool branch_taken_0x3c06f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F0u;
        // 0x3c06f4: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06f0) {
            ctx->pc = 0x3C0718u;
            goto label_3c0718;
        }
    }
    ctx->pc = 0x3C06F8u;
    // 0x3c06f8: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c06f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c06fc: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0700: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c0704: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c0704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0708: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c070c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c070cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0710: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c0714: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c0714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0718:
    // 0x3c0718: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x3c0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x3c071c: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x3c071cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c0720: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0724: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0728: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0728u;
    {
        const bool branch_taken_0x3c0728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0728u;
        // 0x3c072c: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0728) {
            ctx->pc = 0x3C0750u;
            goto label_3c0750;
        }
    }
    ctx->pc = 0x3C0730u;
    // 0x3c0730: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c0734: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c0734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0738: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c073c: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c0744: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c0744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0748: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c074c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c074cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0750:
    // 0x3c0750: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x3c0750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x3c0754: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x3c0754u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3c0758: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c075c: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0760: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0760u;
    {
        const bool branch_taken_0x3c0760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0760u;
        // 0x3c0764: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0760) {
            ctx->pc = 0x3C0788u;
            goto label_3c0788;
        }
    }
    ctx->pc = 0x3C0768u;
    // 0x3c0768: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c076c: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c076cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c0770: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c0770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c0774: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c0774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c0778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c077c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c077cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c0780: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c0780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c0784: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c0784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c0788:
    // 0x3c0788: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x3c0788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x3c078c: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x3c078cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3c0790: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x3c0790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3c0794: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3c0794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3c0798: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0798u;
    {
        const bool branch_taken_0x3c0798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0798u;
        // 0x3c079c: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0798) {
            ctx->pc = 0x3C07C0u;
            goto label_3c07c0;
        }
    }
    ctx->pc = 0x3C07A0u;
    // 0x3c07a0: 0x30a27800  andi        $v0, $a1, 0x7800
    ctx->pc = 0x3c07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30720);
    // 0x3c07a4: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3c07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3c07a8: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3c07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3c07ac: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x3c07acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x3c07b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c07b4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3c07b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3c07b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c07b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c07bc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c07bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c07c0:
    // 0x3c07c0: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x3c07c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x3c07c4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x3c07c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c07c8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c07cc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x3c07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c07d0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x3c07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c07d4: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3c07d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c07d8: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x3c07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c07dc: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x3c07dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3c07e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3c07e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c07e4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3c07e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c07e8: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x3c07e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c07ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3c07ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3c07f0: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C07F0u;
    SET_GPR_U32(ctx, 31, 0x3C07F8u);
    ctx->pc = 0x3C07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07F0u;
    // 0x3c07f4: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C07F0u, 0x3C07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C07F8u;
label_3c07f8:
    // 0x3c07f8: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x3c07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c07fc: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C07FCu;
    SET_GPR_U32(ctx, 31, 0x3C0804u);
    ctx->pc = 0x3C0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07FCu;
    // 0x3c0800: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C07FCu, 0x3C0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0804u;
label_3c0804:
    // 0x3c0804: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x3c0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0808: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0808u;
    SET_GPR_U32(ctx, 31, 0x3C0810u);
    ctx->pc = 0x3C080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0808u;
    // 0x3c080c: 0xa6020012  sh          $v0, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0808u, 0x3C0810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0810u;
label_3c0810:
    // 0x3c0810: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x3c0810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c0814: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c0814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c0818: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c0818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c081c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c0820: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0820u;
        // 0x3c0824: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0828u;
}
