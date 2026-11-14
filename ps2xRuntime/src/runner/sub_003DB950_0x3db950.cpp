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

// Function: sub_003DB950
// Address: 0x3db950 - 0x3dbe30
void sub_003DB950_0x3db950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB950_0x3db950");
#endif

    switch (ctx->pc) {
        case 0x3db9c0u: goto label_3db9c0;
        default: break;
    }

    ctx->pc = 0x3db950u;

    // 0x3db950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3db950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3db954: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3db954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db958: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3db958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3db95c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3db95cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db960: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3db960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3db964: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3db964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3db968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3db96c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3db96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3db970: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3db970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3db974: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x3db974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x3db978: 0x8d0216b0  lw          $v0, 0x16B0($t0)
    ctx->pc = 0x3db978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5808)));
    // 0x3db97c: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3DB97Cu;
    {
        const bool branch_taken_0x3db97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB97Cu;
        // 0x3db980: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db97c) {
            ctx->pc = 0x3DBD64u;
            goto label_3dbd64;
        }
    }
    ctx->pc = 0x3DB984u;
    // 0x3db984: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3db984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3db988: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3db988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3db98c: 0x2455d098  addiu       $s5, $v0, -0x2F68
    ctx->pc = 0x3db98cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955160));
    // 0x3db990: 0x2473c848  addiu       $s3, $v1, -0x37B8
    ctx->pc = 0x3db990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953032));
    // 0x3db994: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3db994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3db998: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3db998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3db99c: 0x2454d198  addiu       $s4, $v0, -0x2E68
    ctx->pc = 0x3db99cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955416));
    // 0x3db9a0: 0x2479ce98  addiu       $t9, $v1, -0x3168
    ctx->pc = 0x3db9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954648));
    // 0x3db9a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3db9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3db9a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3db9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3db9ac: 0x2451c8c0  addiu       $s1, $v0, -0x3740
    ctx->pc = 0x3db9acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x3db9b0: 0x2472d210  addiu       $s2, $v1, -0x2DF0
    ctx->pc = 0x3db9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955536));
    // 0x3db9b4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x3db9b4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db9b8: 0x8d0216b4  lw          $v0, 0x16B4($t0)
    ctx->pc = 0x3db9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5812)));
    // 0x3db9bc: 0x0  nop
    ctx->pc = 0x3db9bcu;
    // NOP
label_3db9c0:
    // 0x3db9c0: 0x8d0316a8  lw          $v1, 0x16A8($t0)
    ctx->pc = 0x3db9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5800)));
    // 0x3db9c4: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x3db9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x3db9c8: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x3db9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x3db9cc: 0x944c0000  lhu         $t4, 0x0($v0)
    ctx->pc = 0x3db9ccu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db9d0: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x3db9d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db9d4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3db9d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3db9d8: 0x15800025  bnez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x3DB9D8u;
    {
        const bool branch_taken_0x3db9d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9D8u;
        // 0x3db9dc: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9d8) {
            ctx->pc = 0x3DBA70u;
            goto label_3dba70;
        }
    }
    ctx->pc = 0x3DB9E0u;
    // 0x3db9e0: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x3db9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3db9e4: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3db9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3db9e8: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x3db9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3db9ec: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3db9ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db9f0: 0x94690002  lhu         $t1, 0x2($v1)
    ctx->pc = 0x3db9f0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3db9f4: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x3db9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3db9f8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3db9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3db9fc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DB9FCu;
    {
        const bool branch_taken_0x3db9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db9fc) {
            ctx->pc = 0x3DBA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB9FCu;
            // 0x3dba00: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBA54u;
            goto label_3dba54;
        }
    }
    ctx->pc = 0x3DBA04u;
    // 0x3dba04: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x3dba04u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dba08: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dba08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dba0c: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3dba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dba10: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3dba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dba14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dba18: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3dba18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dba1c: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dba20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dba24: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dba24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dba28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dba2c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3dba2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dba30: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3dba30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dba34: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dba34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dba38: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dba38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dba3c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dba40: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dba40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dba44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dba48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dba48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dba4c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3DBA4Cu;
    {
        const bool branch_taken_0x3dba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA4Cu;
        // 0x3dba50: 0xad07001c  sw          $a3, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba4c) {
            ctx->pc = 0x3DBD1Cu;
            goto label_3dbd1c;
        }
    }
    ctx->pc = 0x3DBA54u;
label_3dba54:
    // 0x3dba54: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3dba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3dba58: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dba58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dba5c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3dba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dba60: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dba60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dba64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dba68: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x3DBA68u;
    {
        const bool branch_taken_0x3dba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA68u;
        // 0x3dba6c: 0xa50316d0  sh          $v1, 0x16D0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba68) {
            ctx->pc = 0x3DBD54u;
            goto label_3dbd54;
        }
    }
    ctx->pc = 0x3DBA70u;
label_3dba70:
    // 0x3dba70: 0x1551021  addu        $v0, $t2, $s5
    ctx->pc = 0x3dba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x3dba74: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x3dba74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dba78: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x3dba78u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dba7c: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3dba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dba80: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3dba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3dba84: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x3dba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3dba88: 0x94690406  lhu         $t1, 0x406($v1)
    ctx->pc = 0x3dba88u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1030)));
    // 0x3dba8c: 0x1a91023  subu        $v0, $t5, $t1
    ctx->pc = 0x3dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x3dba90: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3dba90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3dba94: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DBA94u;
    {
        const bool branch_taken_0x3dba94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dba94) {
            ctx->pc = 0x3DBA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBA94u;
            // 0x3dba98: 0x94620404  lhu         $v0, 0x404($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBB08u;
            goto label_3dbb08;
        }
    }
    ctx->pc = 0x3DBA9Cu;
    // 0x3dba9c: 0x94660404  lhu         $a2, 0x404($v1)
    ctx->pc = 0x3dba9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1028)));
    // 0x3dbaa0: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbaa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbaa4: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3dbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dbaa8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3dbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbaac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dbaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dbab0: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dbab4: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbab4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbab8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dbabc: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbabcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbac0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dbac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dbac4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3dbac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dbac8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3dbac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dbacc: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dbad0: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbad4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbad8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dbadc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dbadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dbae0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dbae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dbae4: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3dbae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3dbae8: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbaec: 0x1a21823  subu        $v1, $t5, $v0
    ctx->pc = 0x3dbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3dbaf0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3dbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3dbaf4: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3dbaf4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3dbaf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3dbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dbafc: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3dbafcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dbb00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBB00u;
    {
        const bool branch_taken_0x3dbb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB00u;
        // 0x3dbb04: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb00) {
            ctx->pc = 0x3DBB20u;
            goto label_3dbb20;
        }
    }
    ctx->pc = 0x3DBB08u;
label_3dbb08:
    // 0x3dbb08: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3dbb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3dbb0c: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbb0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbb10: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3dbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dbb14: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dbb18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dbb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dbb1c: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3dbb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3dbb20:
    // 0x3dbb20: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x3dbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3dbb24: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x3dbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3dbb28: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3dbb28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dbb2c: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3DBB2Cu;
    {
        const bool branch_taken_0x3dbb2c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB2Cu;
        // 0x3dbb30: 0x741021  addu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb2c) {
            ctx->pc = 0x3DBBD4u;
            goto label_3dbbd4;
        }
    }
    ctx->pc = 0x3DBB34u;
    // 0x3dbb34: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x3dbb34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dbb38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3dbb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dbb3c: 0x1691823  subu        $v1, $t3, $t1
    ctx->pc = 0x3dbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3dbb40: 0x8d0716d4  lw          $a3, 0x16D4($t0)
    ctx->pc = 0x3dbb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbb44: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x3dbb44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3dbb48: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DBB48u;
    {
        const bool branch_taken_0x3dbb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB48u;
        // 0x3dbb4c: 0x1445023  subu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb48) {
            ctx->pc = 0x3DBBBCu;
            goto label_3dbbbc;
        }
    }
    ctx->pc = 0x3DBB50u;
    // 0x3dbb50: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbb54: 0xea2804  sllv        $a1, $t2, $a3
    ctx->pc = 0x3dbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x3dbb58: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dbb5c: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x3dbb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3dbb60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3dbb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3dbb64: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3dbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbb68: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbb68u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbb6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dbb70: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbb74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dbb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbb78: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dbb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbb7c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dbb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dbb80: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x3dbb84: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbb84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbb88: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbb8c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dbb90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dbb94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dbb94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dbb98: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dbb9c: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbba0: 0x1621823  subu        $v1, $t3, $v0
    ctx->pc = 0x3dbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3dbba4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3dbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3dbba8: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3dbba8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3dbbac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3dbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dbbb0: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3dbbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dbbb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBBB4u;
    {
        const bool branch_taken_0x3dbbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBB4u;
        // 0x3dbbb8: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbb4) {
            ctx->pc = 0x3DBBD4u;
            goto label_3dbbd4;
        }
    }
    ctx->pc = 0x3DBBBCu;
label_3dbbbc:
    // 0x3dbbbc: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbbbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbbc0: 0xea1804  sllv        $v1, $t2, $a3
    ctx->pc = 0x3dbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x3dbbc4: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x3dbbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3dbbc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dbbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dbbcc: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbbccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dbbd0: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3dbbd4:
    // 0x3dbbd4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3dbbd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3dbbd8: 0x2d820100  sltiu       $v0, $t4, 0x100
    ctx->pc = 0x3dbbd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3dbbdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBBDCu;
    {
        const bool branch_taken_0x3dbbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBDCu;
        // 0x3dbbe0: 0x1991021  addu        $v0, $t4, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbdc) {
            ctx->pc = 0x3DBBECu;
            goto label_3dbbec;
        }
    }
    ctx->pc = 0x3DBBE4u;
    // 0x3dbbe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBBE4u;
    {
        const bool branch_taken_0x3dbbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBE4u;
        // 0x3dbbe8: 0x904b0000  lbu         $t3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbe4) {
            ctx->pc = 0x3DBBF8u;
            goto label_3dbbf8;
        }
    }
    ctx->pc = 0x3DBBECu;
label_3dbbec:
    // 0x3dbbec: 0xc11c2  srl         $v0, $t4, 7
    ctx->pc = 0x3dbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
    // 0x3dbbf0: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x3dbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x3dbbf4: 0x904b0100  lbu         $t3, 0x100($v0)
    ctx->pc = 0x3dbbf4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_3dbbf8:
    // 0x3dbbf8: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3dbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3dbbfc: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3dbbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbc00: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3dbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dbc04: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x3dbc04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dbc08: 0x94690002  lhu         $t1, 0x2($v1)
    ctx->pc = 0x3dbc08u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3dbc0c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3dbc0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc10: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x3dbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3dbc14: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3dbc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3dbc18: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DBC18u;
    {
        const bool branch_taken_0x3dbc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbc18) {
            ctx->pc = 0x3DBC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBC18u;
            // 0x3dbc1c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBC8Cu;
            goto label_3dbc8c;
        }
    }
    ctx->pc = 0x3DBC20u;
    // 0x3dbc20: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x3dbc20u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dbc24: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbc24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbc28: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3dbc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dbc2c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3dbc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbc30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dbc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dbc34: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dbc38: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbc38u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbc3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dbc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dbc40: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbc44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dbc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dbc48: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3dbc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dbc4c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3dbc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dbc50: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbc50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dbc54: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbc54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbc58: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbc5c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dbc60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dbc64: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dbc64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dbc68: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3dbc68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3dbc6c: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbc70: 0x1621823  subu        $v1, $t3, $v0
    ctx->pc = 0x3dbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3dbc74: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3dbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3dbc78: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3dbc78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3dbc7c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3dbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dbc80: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3dbc80u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dbc84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBC84u;
    {
        const bool branch_taken_0x3dbc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC84u;
        // 0x3dbc88: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbc84) {
            ctx->pc = 0x3DBCA4u;
            goto label_3dbca4;
        }
    }
    ctx->pc = 0x3DBC8Cu;
label_3dbc8c:
    // 0x3dbc8c: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3dbc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3dbc90: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbc90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbc94: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3dbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dbc98: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbc98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dbc9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dbc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dbca0: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3dbca0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3dbca4:
    // 0x3dbca4: 0x1511021  addu        $v0, $t2, $s1
    ctx->pc = 0x3dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x3dbca8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3dbca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dbcac: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3DBCACu;
    {
        const bool branch_taken_0x3dbcac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCACu;
        // 0x3dbcb0: 0x1521021  addu        $v0, $t2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbcac) {
            ctx->pc = 0x3DBD54u;
            goto label_3dbd54;
        }
    }
    ctx->pc = 0x3DBCB4u;
    // 0x3dbcb4: 0x8d0716d4  lw          $a3, 0x16D4($t0)
    ctx->pc = 0x3dbcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbcb8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3dbcb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dbcbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3dbcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dbcc0: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x3dbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3dbcc4: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x3dbcc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3dbcc8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DBCC8u;
    {
        const bool branch_taken_0x3dbcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCC8u;
        // 0x3dbccc: 0x1846023  subu        $t4, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbcc8) {
            ctx->pc = 0x3DBD3Cu;
            goto label_3dbd3c;
        }
    }
    ctx->pc = 0x3DBCD0u;
    // 0x3dbcd0: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbcd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbcd4: 0xec2804  sllv        $a1, $t4, $a3
    ctx->pc = 0x3dbcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3dbcd8: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dbcdc: 0x3186ffff  andi        $a2, $t4, 0xFFFF
    ctx->pc = 0x3dbcdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3dbce0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3dbce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3dbce4: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3dbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbce8: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbce8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbcec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dbcf0: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbcf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbcf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbcf8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dbcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbcfc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dbcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dbd00: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbd00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x3dbd04: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbd04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbd08: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbd0c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dbd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dbd10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dbd14: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dbd14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dbd18: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
label_3dbd1c:
    // 0x3dbd1c: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbd20: 0x1421823  subu        $v1, $t2, $v0
    ctx->pc = 0x3dbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3dbd24: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3dbd28: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3dbd28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3dbd2c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3dbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dbd30: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3dbd30u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dbd34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBD34u;
    {
        const bool branch_taken_0x3dbd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD34u;
        // 0x3dbd38: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbd34) {
            ctx->pc = 0x3DBD54u;
            goto label_3dbd54;
        }
    }
    ctx->pc = 0x3DBD3Cu;
label_3dbd3c:
    // 0x3dbd3c: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbd3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbd40: 0xec1804  sllv        $v1, $t4, $a3
    ctx->pc = 0x3dbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3dbd44: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x3dbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3dbd48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dbd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dbd4c: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dbd50: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbd50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3dbd54:
    // 0x3dbd54: 0x8d0216b0  lw          $v0, 0x16B0($t0)
    ctx->pc = 0x3dbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5808)));
    // 0x3dbd58: 0x1e2102b  sltu        $v0, $t7, $v0
    ctx->pc = 0x3dbd58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dbd5c: 0x5440ff18  bnel        $v0, $zero, . + 4 + (-0xE8 << 2)
    ctx->pc = 0x3DBD5Cu;
    {
        const bool branch_taken_0x3dbd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dbd5c) {
            ctx->pc = 0x3DBD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBD5Cu;
            // 0x3dbd60: 0x8d0216b4  lw          $v0, 0x16B4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db9c0;
        }
    }
    ctx->pc = 0x3DBD64u;
label_3dbd64:
    // 0x3dbd64: 0x95c70402  lhu         $a3, 0x402($t6)
    ctx->pc = 0x3dbd64u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1026)));
    // 0x3dbd68: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3dbd68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dbd6c: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3dbd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbd70: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x3dbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3dbd74: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3dbd74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3dbd78: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DBD78u;
    {
        const bool branch_taken_0x3dbd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbd78) {
            ctx->pc = 0x3DBD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBD78u;
            // 0x3dbd7c: 0x95c20400  lhu         $v0, 0x400($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBDECu;
            goto label_3dbdec;
        }
    }
    ctx->pc = 0x3DBD80u;
    // 0x3dbd80: 0x95c60400  lhu         $a2, 0x400($t6)
    ctx->pc = 0x3dbd80u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1024)));
    // 0x3dbd84: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbd88: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3dbd88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dbd8c: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dbd90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3dbd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3dbd94: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3dbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbd98: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbd98u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbd9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dbda0: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbda4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dbda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbda8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dbda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbdac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dbdacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dbdb0: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x3dbdb4: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbdb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbdb8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbdbc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dbdc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dbdc4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dbdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dbdc8: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dbdcc: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbdd0: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x3dbdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3dbdd4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3dbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3dbdd8: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3dbdd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3dbddc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3dbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3dbde0: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3dbde0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dbde4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBDE4u;
    {
        const bool branch_taken_0x3dbde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDE4u;
        // 0x3dbde8: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbde4) {
            ctx->pc = 0x3DBE04u;
            goto label_3dbe04;
        }
    }
    ctx->pc = 0x3DBDECu;
label_3dbdec:
    // 0x3dbdec: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x3dbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3dbdf0: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbdf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbdf4: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3dbdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dbdf8: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dbdfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dbdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dbe00: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3dbe00u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3dbe04:
    // 0x3dbe04: 0x95c20402  lhu         $v0, 0x402($t6)
    ctx->pc = 0x3dbe04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1026)));
    // 0x3dbe08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dbe08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dbe0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dbe0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dbe10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dbe10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dbe14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3dbe14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dbe18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3dbe18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbe1c: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x3dbe1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbe20: 0xad0216cc  sw          $v0, 0x16CC($t0)
    ctx->pc = 0x3dbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5836), GPR_U32(ctx, 2));
    // 0x3dbe24: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE24u;
        // 0x3dbe28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBE2Cu;
    // 0x3dbe2c: 0x0  nop
    ctx->pc = 0x3dbe2cu;
    // NOP
    ctx->pc = 0x3dbe30u;
}
