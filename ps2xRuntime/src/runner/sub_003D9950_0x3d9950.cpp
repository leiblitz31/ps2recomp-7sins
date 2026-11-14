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

// Function: sub_003D9950
// Address: 0x3d9950 - 0x3d9c88
void sub_003D9950_0x3d9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9950_0x3d9950");
#endif

    switch (ctx->pc) {
        case 0x3d9a48u: goto label_3d9a48;
        case 0x3d9aecu: goto label_3d9aec;
        case 0x3d9b18u: goto label_3d9b18;
        case 0x3d9b48u: goto label_3d9b48;
        case 0x3d9b68u: goto label_3d9b68;
        case 0x3d9bd0u: goto label_3d9bd0;
        case 0x3d9bf0u: goto label_3d9bf0;
        case 0x3d9c2cu: goto label_3d9c2c;
        default: break;
    }

    ctx->pc = 0x3d9950u;

    // 0x3d9950: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3d9954: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3d9954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3d9958: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3d9958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3d995c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d995cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9960: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3d9960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3d9964: 0x26a30b4c  addiu       $v1, $s5, 0xB4C
    ctx->pc = 0x3d9964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2892));
    // 0x3d9968: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3d9968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3d996c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3d996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3d9970: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3d9970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3d9974: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d9974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d9978: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3d9978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3d997c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3d997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3d9980: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d9984: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d9988: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3d9988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3d998c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3d9990: 0x26a20b6a  addiu       $v0, $s5, 0xB6A
    ctx->pc = 0x3d9990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2922));
    // 0x3d9994: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3d9994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d9998: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3d9998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3d999c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d99a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d99a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d99a4: 0x8c7e0010  lw          $fp, 0x10($v1)
    ctx->pc = 0x3d99a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d99a8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3d99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3d99ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3d99acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d99b0: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x3d99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x3d99b4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3d99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d99b8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3d99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3d99bc: 0xa6a00b6a  sh          $zero, 0xB6A($s5)
    ctx->pc = 0x3d99bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2922), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99c0: 0xa440ffe2  sh          $zero, -0x1E($v0)
    ctx->pc = 0x3d99c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967266), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99c4: 0xa440fffe  sh          $zero, -0x2($v0)
    ctx->pc = 0x3d99c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99c8: 0xa440fffc  sh          $zero, -0x4($v0)
    ctx->pc = 0x3d99c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99cc: 0xa440fffa  sh          $zero, -0x6($v0)
    ctx->pc = 0x3d99ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967290), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99d0: 0xa440fff8  sh          $zero, -0x8($v0)
    ctx->pc = 0x3d99d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99d4: 0xa440fff6  sh          $zero, -0xA($v0)
    ctx->pc = 0x3d99d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967286), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99d8: 0xa440fff4  sh          $zero, -0xC($v0)
    ctx->pc = 0x3d99d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99dc: 0xa440fff2  sh          $zero, -0xE($v0)
    ctx->pc = 0x3d99dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967282), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99e0: 0xa440fff0  sh          $zero, -0x10($v0)
    ctx->pc = 0x3d99e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967280), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99e4: 0xa440ffee  sh          $zero, -0x12($v0)
    ctx->pc = 0x3d99e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967278), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99e8: 0xa440ffec  sh          $zero, -0x14($v0)
    ctx->pc = 0x3d99e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967276), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99ec: 0xa440ffea  sh          $zero, -0x16($v0)
    ctx->pc = 0x3d99ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967274), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99f0: 0xa440ffe8  sh          $zero, -0x18($v0)
    ctx->pc = 0x3d99f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99f4: 0xa440ffe6  sh          $zero, -0x1A($v0)
    ctx->pc = 0x3d99f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967270), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99f8: 0xa440ffe4  sh          $zero, -0x1C($v0)
    ctx->pc = 0x3d99f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967268), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99fc: 0x8ea41464  lw          $a0, 0x1464($s5)
    ctx->pc = 0x3d99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5220)));
    // 0x3d9a00: 0x26a30b6c  addiu       $v1, $s5, 0xB6C
    ctx->pc = 0x3d9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2924));
    // 0x3d9a04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d9a08: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3d9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x3d9a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d9a10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9a14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9a18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9a1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9a20: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x3d9a20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9a24: 0x8ea31464  lw          $v1, 0x1464($s5)
    ctx->pc = 0x3d9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5220)));
    // 0x3d9a28: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x3d9a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9a2c: 0x2a82023d  slti        $v0, $s4, 0x23D
    ctx->pc = 0x3d9a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)573) ? 1 : 0);
    // 0x3d9a30: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3D9A30u;
    {
        const bool branch_taken_0x3d9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A30u;
        // 0x3d9a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a30) {
            ctx->pc = 0x3D9B38u;
            goto label_3d9b38;
        }
    }
    ctx->pc = 0x3D9A38u;
    // 0x3d9a38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3d9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d9a3c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x3d9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x3d9a40: 0x44b821  addu        $s7, $v0, $a0
    ctx->pc = 0x3d9a40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d9a44: 0x0  nop
    ctx->pc = 0x3d9a44u;
    // NOP
label_3d9a48:
    // 0x3d9a48: 0x8ef20000  lw          $s2, 0x0($s7)
    ctx->pc = 0x3d9a48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3d9a4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9a50: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x3d9a50u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3d9a54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9a58: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x3d9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x3d9a5c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3d9a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3d9a60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9a68: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3d9a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d9a6c: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x3d9a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9a70: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x3d9a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3d9a74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9A74u;
    {
        const bool branch_taken_0x3d9a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9a74) {
            ctx->pc = 0x3D9A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9A74u;
            // 0x3d9a78: 0xa4b10002  sh          $s1, 0x2($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9A88u;
            goto label_3d9a88;
        }
    }
    ctx->pc = 0x3D9A7Cu;
    // 0x3d9a7c: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3d9a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9a80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d9a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d9a84: 0xa4b10002  sh          $s1, 0x2($a1)
    ctx->pc = 0x3d9a84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 17));
label_3d9a88:
    // 0x3d9a88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d9a8c: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x3d9a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d9a90: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D9A90u;
    {
        const bool branch_taken_0x3d9a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9a90) {
            ctx->pc = 0x3D9A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9A90u;
            // 0x3d9a94: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9B2Cu;
            goto label_3d9b2c;
        }
    }
    ctx->pc = 0x3D9A98u;
    // 0x3d9a98: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3d9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3d9a9c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3d9aa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d9aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9aa4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d9aa8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3d9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9aac: 0x243202a  slt         $a0, $s2, $v1
    ctx->pc = 0x3d9aacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d9ab0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3d9ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9ab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9ab8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D9AB8u;
    {
        const bool branch_taken_0x3d9ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AB8u;
        // 0x3d9abc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ab8) {
            ctx->pc = 0x3D9AD8u;
            goto label_3d9ad8;
        }
    }
    ctx->pc = 0x3D9AC0u;
    // 0x3d9ac0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3d9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9ac4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3d9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d9ac8: 0x2441023  subu        $v0, $s2, $a0
    ctx->pc = 0x3d9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3d9acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9ad4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3d9ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d9ad8:
    // 0x3d9ad8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x3d9ad8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d9adc: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x3d9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x3d9ae0: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x3d9ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x3d9ae4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3D9AE4u;
    SET_GPR_U32(ctx, 31, 0x3D9AECu);
    ctx->pc = 0x3D9AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9AE4u;
    // 0x3d9ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3D9AE4u, 0x3D9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9AECu;
label_3d9aec:
    // 0x3d9aec: 0xdea316b8  ld          $v1, 0x16B8($s5)
    ctx->pc = 0x3d9aecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 5816)));
    // 0x3d9af0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3d9af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d9af4: 0xfea316b8  sd          $v1, 0x16B8($s5)
    ctx->pc = 0x3d9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 5816), GPR_U64(ctx, 3));
    // 0x3d9af8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3d9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9afc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9AFCu;
    {
        const bool branch_taken_0x3d9afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AFCu;
        // 0x3d9b00: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9afc) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D9B04u;
    // 0x3d9b04: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x3d9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x3d9b08: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x3d9b08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d9b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9b10: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3D9B10u;
    SET_GPR_U32(ctx, 31, 0x3D9B18u);
    ctx->pc = 0x3D9B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9B10u;
    // 0x3d9b14: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3D9B10u, 0x3D9B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B18u;
label_3d9b18:
    // 0x3d9b18: 0xdea316c0  ld          $v1, 0x16C0($s5)
    ctx->pc = 0x3d9b18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 5824)));
    // 0x3d9b1c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3d9b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d9b20: 0xfea316c0  sd          $v1, 0x16C0($s5)
    ctx->pc = 0x3d9b20u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 5824), GPR_U64(ctx, 3));
    // 0x3d9b24: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x3d9b24u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9b28:
    // 0x3d9b28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d9b28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d9b2c:
    // 0x3d9b2c: 0x2a82023d  slti        $v0, $s4, 0x23D
    ctx->pc = 0x3d9b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)573) ? 1 : 0);
    // 0x3d9b30: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3D9B30u;
    {
        const bool branch_taken_0x3d9b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B30u;
        // 0x3d9b34: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b30) {
            ctx->pc = 0x3D9A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9a48;
        }
    }
    ctx->pc = 0x3D9B38u;
label_3d9b38:
    // 0x3d9b38: 0x10e00046  beqz        $a3, . + 4 + (0x46 << 2)
    ctx->pc = 0x3D9B38u;
    {
        const bool branch_taken_0x3d9b38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B38u;
        // 0x3d9b3c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b38) {
            ctx->pc = 0x3D9C54u;
            goto label_3d9c54;
        }
    }
    ctx->pc = 0x3D9B40u;
    // 0x3d9b40: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x3d9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x3d9b44: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x3d9b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d9b48:
    // 0x3d9b48: 0x27d1ffff  addiu       $s1, $fp, -0x1
    ctx->pc = 0x3d9b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x3d9b4c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x3d9b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3d9b50: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x3d9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3d9b54: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3d9b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9b58: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9B58u;
    {
        const bool branch_taken_0x3d9b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B58u;
        // 0x3d9b5c: 0x24e7fffe  addiu       $a3, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b58) {
            ctx->pc = 0x3D9B84u;
            goto label_3d9b84;
        }
    }
    ctx->pc = 0x3D9B60u;
    // 0x3d9b60: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3d9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3d9b64: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3d9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d9b68:
    // 0x3d9b68: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3d9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3d9b6c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d9b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9b70: 0x0  nop
    ctx->pc = 0x3d9b70u;
    // NOP
    // 0x3d9b74: 0x0  nop
    ctx->pc = 0x3d9b74u;
    // NOP
    // 0x3d9b78: 0x0  nop
    ctx->pc = 0x3d9b78u;
    // NOP
    // 0x3d9b7c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D9B7Cu;
    {
        const bool branch_taken_0x3d9b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B7Cu;
        // 0x3d9b80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b7c) {
            ctx->pc = 0x3D9B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9b68;
        }
    }
    ctx->pc = 0x3D9B84u;
label_3d9b84:
    // 0x3d9b84: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x3d9b84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3d9b88: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x3d9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d9b8c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3d9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3d9b90: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3d9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3d9b94: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3d9b94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d9b98: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3d9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3d9b9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d9ba0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3d9ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9ba4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3d9ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d9ba8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3d9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3d9bac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d9bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d9bb0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3d9bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3d9bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d9bb8: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3D9BB8u;
    {
        const bool branch_taken_0x3d9bb8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x3D9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BB8u;
        // 0x3d9bbc: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bb8) {
            ctx->pc = 0x3D9B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9b48;
        }
    }
    ctx->pc = 0x3D9BC0u;
    // 0x3d9bc0: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3d9bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9bc4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D9BC4u;
    {
        const bool branch_taken_0x3d9bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BC4u;
        // 0x3d9bc8: 0x14a080  sll         $s4, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bc4) {
            ctx->pc = 0x3D9C54u;
            goto label_3d9c54;
        }
    }
    ctx->pc = 0x3D9BCCu;
    // 0x3d9bcc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3d9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3d9bd0:
    // 0x3d9bd0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3d9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3d9bd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d9bd8: 0x94520000  lhu         $s2, 0x0($v0)
    ctx->pc = 0x3d9bd8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9bdc: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D9BDCu;
    {
        const bool branch_taken_0x3d9bdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BDCu;
        // 0x3d9be0: 0x2636ffff  addiu       $s6, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bdc) {
            ctx->pc = 0x3D9C48u;
            goto label_3d9c48;
        }
    }
    ctx->pc = 0x3D9BE4u;
    // 0x3d9be4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3d9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d9be8: 0x2849821  addu        $s3, $s4, $a0
    ctx->pc = 0x3d9be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x3d9bec: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x3d9becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_3d9bf0:
    // 0x3d9bf0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d9bf4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3d9bf8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3d9bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d9bfc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D9BFCu;
    {
        const bool branch_taken_0x3d9bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BFCu;
        // 0x3d9c00: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bfc) {
            ctx->pc = 0x3D9C40u;
            goto label_3d9c40;
        }
    }
    ctx->pc = 0x3D9C04u;
    // 0x3d9c04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9c08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9c0c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3d9c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9c10: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3d9c10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3d9c14: 0x5071000a  beql        $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9C14u;
    {
        const bool branch_taken_0x3d9c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x3d9c14) {
            ctx->pc = 0x3D9C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9C14u;
            // 0x3d9c18: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9C40u;
            goto label_3d9c40;
        }
    }
    ctx->pc = 0x3D9C1Cu;
    // 0x3d9c1c: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x3d9c1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3d9c20: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x3d9c20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d9c24: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3D9C24u;
    SET_GPR_U32(ctx, 31, 0x3D9C2Cu);
    ctx->pc = 0x3D9C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C24u;
    // 0x3d9c28: 0x224202f  dsubu       $a0, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) - GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3D9C24u, 0x3D9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C2Cu;
label_3d9c2c:
    // 0x3d9c2c: 0xdea316b8  ld          $v1, 0x16B8($s5)
    ctx->pc = 0x3d9c2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 5816)));
    // 0x3d9c30: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3d9c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d9c34: 0xfea316b8  sd          $v1, 0x16B8($s5)
    ctx->pc = 0x3d9c34u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 5816), GPR_U64(ctx, 3));
    // 0x3d9c38: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x3d9c38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x3d9c3c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3d9c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3d9c40:
    // 0x3d9c40: 0x5640ffeb  bnel        $s2, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3D9C40u;
    {
        const bool branch_taken_0x3d9c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c40) {
            ctx->pc = 0x3D9C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9C40u;
            // 0x3d9c44: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9bf0;
        }
    }
    ctx->pc = 0x3D9C48u;
label_3d9c48:
    // 0x3d9c48: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3d9c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9c4c: 0x1620ffe0  bnez        $s1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3D9C4Cu;
    {
        const bool branch_taken_0x3d9c4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C4Cu;
        // 0x3d9c50: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9c4c) {
            ctx->pc = 0x3D9BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9bd0;
        }
    }
    ctx->pc = 0x3D9C54u;
label_3d9c54:
    // 0x3d9c54: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3d9c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3d9c58: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3d9c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3d9c5c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3d9c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d9c60: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3d9c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d9c64: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3d9c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d9c68: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3d9c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d9c6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d9c6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d9c70: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3d9c70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d9c74: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3d9c74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d9c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d9c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d9c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C7Cu;
        // 0x3d9c80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9C84u;
    // 0x3d9c84: 0x0  nop
    ctx->pc = 0x3d9c84u;
    // NOP
    ctx->pc = 0x3d9c88u;
}
