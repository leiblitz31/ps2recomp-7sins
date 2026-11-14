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

// Function: sub_003D6E50
// Address: 0x3d6e50 - 0x3d7088
void sub_003D6E50_0x3d6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6E50_0x3d6e50");
#endif

    switch (ctx->pc) {
        case 0x3d6e98u: goto label_3d6e98;
        case 0x3d6eb8u: goto label_3d6eb8;
        case 0x3d6ff8u: goto label_3d6ff8;
        case 0x3d7044u: goto label_3d7044;
        case 0x3d7054u: goto label_3d7054;
        default: break;
    }

    ctx->pc = 0x3d6e50u;

    // 0x3d6e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d6e54: 0x4143a  dsrl        $v0, $a0, 16
    ctx->pc = 0x3d6e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 16);
    // 0x3d6e58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3d6e5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3d6e60: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x3d6e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3d6e64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d6e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d6e68: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3d6e68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d6e6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d6e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3d6e70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d6e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e74: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d6e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3d6e78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d6e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e7c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6E7Cu;
    {
        const bool branch_taken_0x3d6e7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E7Cu;
        // 0x3d6e80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e7c) {
            ctx->pc = 0x3D6E8Cu;
            goto label_3d6e8c;
        }
    }
    ctx->pc = 0x3D6E84u;
    // 0x3d6e84: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x3D6E84u;
    {
        const bool branch_taken_0x3d6e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E84u;
        // 0x3d6e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e84) {
            ctx->pc = 0x3D7064u;
            goto label_3d7064;
        }
    }
    ctx->pc = 0x3D6E8Cu;
label_3d6e8c:
    // 0x3d6e8c: 0x12600073  beqz        $s3, . + 4 + (0x73 << 2)
    ctx->pc = 0x3D6E8Cu;
    {
        const bool branch_taken_0x3d6e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E8Cu;
        // 0x3d6e90: 0x241415b0  addiu       $s4, $zero, 0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e8c) {
            ctx->pc = 0x3D705Cu;
            goto label_3d705c;
        }
    }
    ctx->pc = 0x3D6E94u;
    // 0x3d6e94: 0x0  nop
    ctx->pc = 0x3d6e94u;
    // NOP
label_3d6e98:
    // 0x3d6e98: 0x2e6215b1  sltiu       $v0, $s3, 0x15B1
    ctx->pc = 0x3d6e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5553) ? 1 : 0);
    // 0x3d6e9c: 0x280682d  daddu       $t5, $s4, $zero
    ctx->pc = 0x3d6e9cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6ea0: 0x262680b  movn        $t5, $s3, $v0
    ctx->pc = 0x3d6ea0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 19));
    // 0x3d6ea4: 0x29a20010  slti        $v0, $t5, 0x10
    ctx->pc = 0x3d6ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3d6ea8: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3D6EA8u;
    {
        const bool branch_taken_0x3d6ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EA8u;
        // 0x3d6eac: 0x26d9823  subu        $s3, $s3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ea8) {
            ctx->pc = 0x3D6F8Cu;
            goto label_3d6f8c;
        }
    }
    ctx->pc = 0x3D6EB0u;
    // 0x3d6eb0: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x3d6eb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6eb4: 0x0  nop
    ctx->pc = 0x3d6eb4u;
    // NOP
label_3d6eb8:
    // 0x3d6eb8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3d6eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3d6ebc: 0x25adfff0  addiu       $t5, $t5, -0x10
    ctx->pc = 0x3d6ebcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967280));
    // 0x3d6ec0: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x3d6ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3d6ec4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3d6ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3d6ec8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d6ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d6ecc: 0x91840002  lbu         $a0, 0x2($t4)
    ctx->pc = 0x3d6eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3d6ed0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6ed4: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x3d6ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x3d6ed8: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3d6ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d6edc: 0x91850004  lbu         $a1, 0x4($t4)
    ctx->pc = 0x3d6edcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3d6ee0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6ee4: 0x91830005  lbu         $v1, 0x5($t4)
    ctx->pc = 0x3d6ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x3d6ee8: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x3d6ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3d6eec: 0x91860006  lbu         $a2, 0x6($t4)
    ctx->pc = 0x3d6eecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x3d6ef0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6ef4: 0x91840007  lbu         $a0, 0x7($t4)
    ctx->pc = 0x3d6ef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x3d6ef8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d6ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d6efc: 0x91870008  lbu         $a3, 0x8($t4)
    ctx->pc = 0x3d6efcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x3d6f00: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f04: 0x91880009  lbu         $t0, 0x9($t4)
    ctx->pc = 0x3d6f04u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x3d6f08: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x3d6f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d6f0c: 0x9189000a  lbu         $t1, 0xA($t4)
    ctx->pc = 0x3d6f0cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x3d6f10: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f14: 0x9185000b  lbu         $a1, 0xB($t4)
    ctx->pc = 0x3d6f14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x3d6f18: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3d6f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d6f1c: 0x918a000c  lbu         $t2, 0xC($t4)
    ctx->pc = 0x3d6f1cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3d6f20: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f24: 0x9183000d  lbu         $v1, 0xD($t4)
    ctx->pc = 0x3d6f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x3d6f28: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x3d6f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3d6f2c: 0x918b000e  lbu         $t3, 0xE($t4)
    ctx->pc = 0x3d6f2cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x3d6f30: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f34: 0x9186000f  lbu         $a2, 0xF($t4)
    ctx->pc = 0x3d6f34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x3d6f38: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x3d6f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3d6f3c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x3d6f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3d6f40: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f44: 0x29a20010  slti        $v0, $t5, 0x10
    ctx->pc = 0x3d6f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3d6f48: 0x207802d  daddu       $s0, $s0, $a3
    ctx->pc = 0x3d6f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3d6f4c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f50: 0x208802d  daddu       $s0, $s0, $t0
    ctx->pc = 0x3d6f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 8));
    // 0x3d6f54: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f58: 0x209802d  daddu       $s0, $s0, $t1
    ctx->pc = 0x3d6f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 9));
    // 0x3d6f5c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f60: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x3d6f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d6f64: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f68: 0x20a802d  daddu       $s0, $s0, $t2
    ctx->pc = 0x3d6f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 10));
    // 0x3d6f6c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f70: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3d6f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d6f74: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f78: 0x20b802d  daddu       $s0, $s0, $t3
    ctx->pc = 0x3d6f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 11));
    // 0x3d6f7c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d6f80: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x3d6f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3d6f84: 0x1040ffcc  beqz        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3D6F84u;
    {
        const bool branch_taken_0x3d6f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F84u;
        // 0x3d6f88: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f84) {
            ctx->pc = 0x3D6EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6eb8;
        }
    }
    ctx->pc = 0x3D6F8Cu;
label_3d6f8c:
    // 0x3d6f8c: 0x11a0002a  beqz        $t5, . + 4 + (0x2A << 2)
    ctx->pc = 0x3D6F8Cu;
    {
        const bool branch_taken_0x3d6f8c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F8Cu;
        // 0x3d6f90: 0xd1023  negu        $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f8c) {
            ctx->pc = 0x3D7038u;
            goto label_3d7038;
        }
    }
    ctx->pc = 0x3D6F94u;
    // 0x3d6f94: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d6f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3d6f98: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D6F98u;
    {
        const bool branch_taken_0x3d6f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F98u;
        // 0x3d6f9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f98) {
            ctx->pc = 0x3D6FF8u;
            goto label_3d6ff8;
        }
    }
    ctx->pc = 0x3D6FA0u;
    // 0x3d6fa0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d6fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d6fa4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D6FA4u;
    {
        const bool branch_taken_0x3d6fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FA4u;
        // 0x3d6fa8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6fa4) {
            ctx->pc = 0x3D6FE4u;
            goto label_3d6fe4;
        }
    }
    ctx->pc = 0x3D6FACu;
    // 0x3d6fac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D6FACu;
    {
        const bool branch_taken_0x3d6fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FACu;
        // 0x3d6fb0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6fac) {
            ctx->pc = 0x3D6FCCu;
            goto label_3d6fcc;
        }
    }
    ctx->pc = 0x3D6FB4u;
    // 0x3d6fb4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3d6fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d6fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d6fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6fbc: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3d6fbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3d6fc0: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3d6fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d6fc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d6fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6fc8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
label_3d6fcc:
    // 0x3d6fcc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3d6fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d6fd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d6fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3d6fd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d6fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d6fd8: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3d6fd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3d6fdc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d6fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d6fe0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d6fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
label_3d6fe4:
    // 0x3d6fe4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3d6fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d6fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d6fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3d6fec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d6fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d6ff0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3D6FF0u;
    {
        const bool branch_taken_0x3d6ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FF0u;
        // 0x3d6ff4: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ff0) {
            ctx->pc = 0x3D702Cu;
            goto label_3d702c;
        }
    }
    ctx->pc = 0x3D6FF8u;
label_3d6ff8:
    // 0x3d6ff8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3d6ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d6ffc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3d6ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3d7000: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3d7000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3d7004: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x3d7004u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x3d7008: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d7008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d700c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3d700cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3d7010: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d7010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d7014: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3d7014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3d7018: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3d7018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d701c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d701cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d7020: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d7020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d7024: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x3d7024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3d7028: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d7028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
label_3d702c:
    // 0x3d702c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d702cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d7030: 0x15a0fff1  bnez        $t5, . + 4 + (-0xF << 2)
    ctx->pc = 0x3D7030u;
    {
        const bool branch_taken_0x3d7030 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7030u;
        // 0x3d7034: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7030) {
            ctx->pc = 0x3D6FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6ff8;
        }
    }
    ctx->pc = 0x3D7038u;
label_3d7038:
    // 0x3d7038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d703c: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3D703Cu;
    SET_GPR_U32(ctx, 31, 0x3D7044u);
    ctx->pc = 0x3D7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D703Cu;
    // 0x3d7040: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3D703Cu, 0x3D7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7044u;
label_3d7044:
    // 0x3d7044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d704c: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3D704Cu;
    SET_GPR_U32(ctx, 31, 0x3D7054u);
    ctx->pc = 0x3D7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D704Cu;
    // 0x3d7050: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3D704Cu, 0x3D7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7054u;
label_3d7054:
    // 0x3d7054: 0x1660ff90  bnez        $s3, . + 4 + (-0x70 << 2)
    ctx->pc = 0x3D7054u;
    {
        const bool branch_taken_0x3d7054 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7054u;
        // 0x3d7058: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7054) {
            ctx->pc = 0x3D6E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6e98;
        }
    }
    ctx->pc = 0x3D705Cu;
label_3d705c:
    // 0x3d705c: 0x111438  dsll        $v0, $s1, 16
    ctx->pc = 0x3d705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
    // 0x3d7060: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3d7060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3d7064:
    // 0x3d7064: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d7064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d7068: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d7068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d706c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d706cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d7070: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d7070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d7074: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d7074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d707c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D707Cu;
        // 0x3d7080: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7084u;
    // 0x3d7084: 0x0  nop
    ctx->pc = 0x3d7084u;
    // NOP
    ctx->pc = 0x3d7088u;
}
