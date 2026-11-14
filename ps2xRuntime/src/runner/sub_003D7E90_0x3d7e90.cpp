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

// Function: sub_003D7E90
// Address: 0x3d7e90 - 0x3d80c8
void sub_003D7E90_0x3d7e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7E90_0x3d7e90");
#endif

    switch (ctx->pc) {
        case 0x3d7f38u: goto label_3d7f38;
        case 0x3d7f88u: goto label_3d7f88;
        default: break;
    }

    ctx->pc = 0x3d7e90u;

    // 0x3d7e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d7e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d7e94: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3d7e94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7e98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d7e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3d7e9c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3d7e9cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7ea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d7ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d7ea4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d7ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3d7ea8: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x3d7ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x3d7eac: 0x8d65002c  lw          $a1, 0x2C($t3)
    ctx->pc = 0x3d7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x3d7eb0: 0x8d64007c  lw          $a0, 0x7C($t3)
    ctx->pc = 0x3d7eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 124)));
    // 0x3d7eb4: 0x8d630038  lw          $v1, 0x38($t3)
    ctx->pc = 0x3d7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x3d7eb8: 0x24a2fefa  addiu       $v0, $a1, -0x106
    ctx->pc = 0x3d7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967034));
    // 0x3d7ebc: 0x8d6f008c  lw          $t7, 0x8C($t3)
    ctx->pc = 0x3d7ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 140)));
    // 0x3d7ec0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3d7ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d7ec4: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x3d7ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d7ec8: 0x8d6c0088  lw          $t4, 0x88($t3)
    ctx->pc = 0x3d7ec8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 136)));
    // 0x3d7ecc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7ECCu;
    {
        const bool branch_taken_0x3d7ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7ECCu;
        // 0x3d7ed0: 0x8d7900a0  lw          $t9, 0xA0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ecc) {
            ctx->pc = 0x3D7EE0u;
            goto label_3d7ee0;
        }
    }
    ctx->pc = 0x3D7ED4u;
    // 0x3d7ed4: 0x24820106  addiu       $v0, $a0, 0x106
    ctx->pc = 0x3d7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 262));
    // 0x3d7ed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D7ED8u;
    {
        const bool branch_taken_0x3d7ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7ED8u;
        // 0x3d7edc: 0x458023  subu        $s0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ed8) {
            ctx->pc = 0x3D7EE4u;
            goto label_3d7ee4;
        }
    }
    ctx->pc = 0x3D7EE0u;
label_3d7ee0:
    // 0x3d7ee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ee4:
    // 0x3d7ee4: 0x8d670084  lw          $a3, 0x84($t3)
    ctx->pc = 0x3d7ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x3d7ee8: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x3d7ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3d7eec: 0x8d620038  lw          $v0, 0x38($t3)
    ctx->pc = 0x3d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x3d7ef0: 0xf4882  srl         $t1, $t7, 2
    ctx->pc = 0x3d7ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 15), 2));
    // 0x3d7ef4: 0x8d64007c  lw          $a0, 0x7C($t3)
    ctx->pc = 0x3d7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 124)));
    // 0x3d7ef8: 0xf9402b  sltu        $t0, $a3, $t9
    ctx->pc = 0x3d7ef8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3d7efc: 0x8d630088  lw          $v1, 0x88($t3)
    ctx->pc = 0x3d7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 136)));
    // 0x3d7f00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d7f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7f04: 0x8d65009c  lw          $a1, 0x9C($t3)
    ctx->pc = 0x3d7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 156)));
    // 0x3d7f08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d7f0c: 0x90d80000  lbu         $t8, 0x0($a2)
    ctx->pc = 0x3d7f0cu;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d7f10: 0xe8c80b  movn        $t9, $a3, $t0
    ctx->pc = 0x3d7f10u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 7));
    // 0x3d7f14: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x3d7f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d7f18: 0x8d720048  lw          $s2, 0x48($t3)
    ctx->pc = 0x3d7f18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x3d7f1c: 0x8d710034  lw          $s1, 0x34($t3)
    ctx->pc = 0x3d7f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x3d7f20: 0x244d0102  addiu       $t5, $v0, 0x102
    ctx->pc = 0x3d7f20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
    // 0x3d7f24: 0x90c6ffff  lbu         $a2, -0x1($a2)
    ctx->pc = 0x3d7f24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3d7f28: 0x123780a  movz        $t7, $t1, $v1
    ctx->pc = 0x3d7f28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 9));
    // 0x3d7f2c: 0x24070102  addiu       $a3, $zero, 0x102
    ctx->pc = 0x3d7f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x3d7f30: 0x26e2021  addu        $a0, $s3, $t6
    ctx->pc = 0x3d7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x3d7f34: 0x0  nop
    ctx->pc = 0x3d7f34u;
    // NOP
label_3d7f38:
    // 0x3d7f38: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x3d7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x3d7f3c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3d7f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d7f40: 0x1458004f  bne         $v0, $t8, . + 4 + (0x4F << 2)
    ctx->pc = 0x3D7F40u;
    {
        const bool branch_taken_0x3d7f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x3D7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F40u;
        // 0x3d7f44: 0x1d11024  and         $v0, $t6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f40) {
            ctx->pc = 0x3D8080u;
            goto label_3d8080;
        }
    }
    ctx->pc = 0x3D7F48u;
    // 0x3d7f48: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x3d7f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x3d7f4c: 0x1446004c  bne         $v0, $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x3D7F4Cu;
    {
        const bool branch_taken_0x3d7f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x3D7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F4Cu;
        // 0x3d7f50: 0x1d11024  and         $v0, $t6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f4c) {
            ctx->pc = 0x3D8080u;
            goto label_3d8080;
        }
    }
    ctx->pc = 0x3D7F54u;
    // 0x3d7f54: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d7f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7f58: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3d7f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d7f5c: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3D7F5Cu;
    {
        const bool branch_taken_0x3d7f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F5Cu;
        // 0x3d7f60: 0x1d11024  and         $v0, $t6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f5c) {
            ctx->pc = 0x3D8080u;
            goto label_3d8080;
        }
    }
    ctx->pc = 0x3D7F64u;
    // 0x3d7f64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7f68: 0x91430001  lbu         $v1, 0x1($t2)
    ctx->pc = 0x3d7f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3d7f6c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d7f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7f70: 0x14430043  bne         $v0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3D7F70u;
    {
        const bool branch_taken_0x3d7f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F70u;
        // 0x3d7f74: 0x1d11024  and         $v0, $t6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f70) {
            ctx->pc = 0x3D8080u;
            goto label_3d8080;
        }
    }
    ctx->pc = 0x3D7F78u;
    // 0x3d7f78: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x3d7f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x3d7f7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7f80: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3D7F80u;
    {
        const bool branch_taken_0x3d7f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F80u;
        // 0x3d7f84: 0x25a5fefe  addiu       $a1, $t5, -0x102 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967038));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f80) {
            ctx->pc = 0x3D7FECu;
            goto label_3d7fec;
        }
    }
    ctx->pc = 0x3D7F88u;
label_3d7f88:
    // 0x3d7f88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7f8c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d7f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d7f90: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d7f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7f94: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3D7F94u;
    {
        const bool branch_taken_0x3d7f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F94u;
        // 0x3d7f98: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f94) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D7F9Cu;
    // 0x3d7f9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d7f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d7fa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7fa4: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d7fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d7fa8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d7fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7fac: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3D7FACu;
    {
        const bool branch_taken_0x3d7fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FACu;
        // 0x3d7fb0: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fac) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D7FB4u;
    // 0x3d7fb4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d7fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d7fb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7fbc: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d7fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d7fc0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d7fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7fc4: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D7FC4u;
    {
        const bool branch_taken_0x3d7fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FC4u;
        // 0x3d7fc8: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fc4) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D7FCCu;
    // 0x3d7fcc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d7fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d7fd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7fd4: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d7fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d7fd8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d7fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7fdc: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3D7FDCu;
    {
        const bool branch_taken_0x3d7fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FDCu;
        // 0x3d7fe0: 0x14d102b  sltu        $v0, $t2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fdc) {
            ctx->pc = 0x3D804Cu;
            goto label_3d804c;
        }
    }
    ctx->pc = 0x3D7FE4u;
    // 0x3d7fe4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D7FE4u;
    {
        const bool branch_taken_0x3d7fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FE4u;
        // 0x3d7fe8: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fe4) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D7FECu;
label_3d7fec:
    // 0x3d7fec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d7fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d7ff0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d7ff4: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d7ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d7ff8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d7ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7ffc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D7FFCu;
    {
        const bool branch_taken_0x3d7ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FFCu;
        // 0x3d8000: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ffc) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D8004u;
    // 0x3d8004: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d8004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d8008: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d8008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d800c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d800cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d8010: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d8010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8014: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D8014u;
    {
        const bool branch_taken_0x3d8014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8014u;
        // 0x3d8018: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8014) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D801Cu;
    // 0x3d801c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d801cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d8020: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d8020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d8024: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d8024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d8028: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d8028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d802c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D802Cu;
    {
        const bool branch_taken_0x3d802c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D802Cu;
        // 0x3d8030: 0x1aa1023  subu        $v0, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d802c) {
            ctx->pc = 0x3D8050u;
            goto label_3d8050;
        }
    }
    ctx->pc = 0x3D8034u;
    // 0x3d8034: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d8034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d8038: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d803c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x3d803cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d8040: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d8040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8044: 0x5062ffd0  beql        $v1, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3D8044u;
    {
        const bool branch_taken_0x3d8044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8044) {
            ctx->pc = 0x3D8048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8044u;
            // 0x3d8048: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7f88;
        }
    }
    ctx->pc = 0x3D804Cu;
label_3d804c:
    // 0x3d804c: 0x1aa1023  subu        $v0, $t5, $t2
    ctx->pc = 0x3d804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
label_3d8050:
    // 0x3d8050: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x3d8050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3d8054: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x3d8054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d8058: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8058u;
    {
        const bool branch_taken_0x3d8058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8058u;
        // 0x3d805c: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8058) {
            ctx->pc = 0x3D807Cu;
            goto label_3d807c;
        }
    }
    ctx->pc = 0x3D8060u;
    // 0x3d8060: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x3d8060u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8064: 0x199102a  slt         $v0, $t4, $t9
    ctx->pc = 0x3d8064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3d8068: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D8068u;
    {
        const bool branch_taken_0x3d8068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8068u;
        // 0x3d806c: 0xad6e0080  sw          $t6, 0x80($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 128), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8068) {
            ctx->pc = 0x3D80A4u;
            goto label_3d80a4;
        }
    }
    ctx->pc = 0x3D8070u;
    // 0x3d8070: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x3d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3d8074: 0x90580000  lbu         $t8, 0x0($v0)
    ctx->pc = 0x3d8074u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d8078: 0x9046ffff  lbu         $a2, -0x1($v0)
    ctx->pc = 0x3d8078u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_3d807c:
    // 0x3d807c: 0x1d11024  and         $v0, $t6, $s1
    ctx->pc = 0x3d807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 17));
label_3d8080:
    // 0x3d8080: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d8080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3d8084: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d8084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3d8088: 0x944e0000  lhu         $t6, 0x0($v0)
    ctx->pc = 0x3d8088u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d808c: 0x20e182b  sltu        $v1, $s0, $t6
    ctx->pc = 0x3d808cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3d8090: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8090u;
    {
        const bool branch_taken_0x3d8090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8090) {
            ctx->pc = 0x3D8094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8090u;
            // 0x3d8094: 0x8d620084  lw          $v0, 0x84($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D80A8u;
            goto label_3d80a8;
        }
    }
    ctx->pc = 0x3D8098u;
    // 0x3d8098: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x3d8098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3d809c: 0x55e0ffa6  bnel        $t7, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x3D809Cu;
    {
        const bool branch_taken_0x3d809c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d809c) {
            ctx->pc = 0x3D80A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D809Cu;
            // 0x3d80a0: 0x26e2021  addu        $a0, $s3, $t6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7f38;
        }
    }
    ctx->pc = 0x3D80A4u;
label_3d80a4:
    // 0x3d80a4: 0x8d620084  lw          $v0, 0x84($t3)
    ctx->pc = 0x3d80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
label_3d80a8:
    // 0x3d80a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d80a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d80ac: 0x4c182b  sltu        $v1, $v0, $t4
    ctx->pc = 0x3d80acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3d80b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d80b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d80b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d80b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d80b8: 0x183100a  movz        $v0, $t4, $v1
    ctx->pc = 0x3d80b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x3d80bc: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x3d80bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80C0u;
        // 0x3d80c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D80C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D80C8u;
}
