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

// Function: sub_004B14B8
// Address: 0x4b14b8 - 0x4b16a8
void sub_004B14B8_0x4b14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B14B8_0x4b14b8");
#endif

    switch (ctx->pc) {
        case 0x4b14d4u: goto label_4b14d4;
        case 0x4b14e8u: goto label_4b14e8;
        case 0x4b168cu: goto label_4b168c;
        default: break;
    }

    ctx->pc = 0x4b14b8u;

    // 0x4b14b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b14b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b14bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b14bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b14c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b14c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b14c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b14c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b14c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b14cc: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B14CCu;
    SET_GPR_U32(ctx, 31, 0x4B14D4u);
    ctx->pc = 0x4B14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B14CCu;
    // 0x4b14d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B14CCu, 0x4B14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B14D4u;
label_4b14d4:
    // 0x4b14d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b14d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4b14d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b14dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b14dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b14e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b14e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b14e4: 0x244beb80  addiu       $t3, $v0, -0x1480
    ctx->pc = 0x4b14e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
label_4b14e8:
    // 0x4b14e8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4b14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b14ec: 0x56020062  bnel        $s0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x4B14ECu;
    {
        const bool branch_taken_0x4b14ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b14ec) {
            ctx->pc = 0x4B14F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B14ECu;
            // 0x4b14f0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1678u;
            goto label_4b1678;
        }
    }
    ctx->pc = 0x4B14F4u;
    // 0x4b14f4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x4b14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4b14f8: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4B14F8u;
    {
        const bool branch_taken_0x4b14f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14F8u;
        // 0x4b14fc: 0x8f82b90c  lw          $v0, -0x46F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b14f8) {
            ctx->pc = 0x4B1590u;
            goto label_4b1590;
        }
    }
    ctx->pc = 0x4B1500u;
    // 0x4b1500: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4b1500u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b1504: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x4b1504u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x4b1508: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b150c: 0xa0400600  sb          $zero, 0x600($v0)
    ctx->pc = 0x4b150cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b1510: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x4b1510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x4b1514: 0x8f85b90c  lw          $a1, -0x46F4($gp)
    ctx->pc = 0x4b1514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b1518: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x4b1518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b151c: 0x24a30630  addiu       $v1, $a1, 0x630
    ctx->pc = 0x4b151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x4b1520: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x4b1520u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x4b1524: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x4b1524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x4b1528: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4b1528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4b152c: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x4b152cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b1530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1534: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x4b1534u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x4b1538: 0x24a80638  addiu       $t0, $a1, 0x638
    ctx->pc = 0x4b1538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x4b153c: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x4b153cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x4b1540: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b1540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b1544: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x4b1544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4b1548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4b1548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4b154c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x4b154cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4b1550: 0x24a90648  addiu       $t1, $a1, 0x648
    ctx->pc = 0x4b1550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x4b1554: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b1554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1558: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x4b1558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4b155c: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x4b155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x4b1560: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b1560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b1564: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4b1564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4b1568: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b1568u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b156c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b1570: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b1570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b1574: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b1574u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b1578: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b157c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b157cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b1580: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b1580u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b1584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1588: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b1588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b158c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b158cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4b1590:
    // 0x4b1590: 0x8f82b90c  lw          $v0, -0x46F4($gp)
    ctx->pc = 0x4b1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b1594: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4b1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4b1598: 0xa0400600  sb          $zero, 0x600($v0)
    ctx->pc = 0x4b1598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b159c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x4b159cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x4b15a0: 0x8f85b90c  lw          $a1, -0x46F4($gp)
    ctx->pc = 0x4b15a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b15a4: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4b15a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x4b15a8: 0x24a40630  addiu       $a0, $a1, 0x630
    ctx->pc = 0x4b15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x4b15ac: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x4b15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4b15b0: 0x24a60638  addiu       $a2, $a1, 0x638
    ctx->pc = 0x4b15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x4b15b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b15b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b15b8: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x4b15b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x4b15bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b15c0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x4b15c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x4b15c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b15c8: 0x24a80648  addiu       $t0, $a1, 0x648
    ctx->pc = 0x4b15c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x4b15cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b15d0: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x4b15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x4b15d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b15d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b15d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b15dc: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x4b15dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x4b15e0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4b15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4b15e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b15e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b15e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b15ec: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x4b15ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x4b15f0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4b15f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4b15f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b15f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b15f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b15fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4b15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4b1600: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x4b1600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x4b1604: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4b1604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4b1608: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b1608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b160c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b160cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b1610: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x4b1610u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x4b1614: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4b1614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4b1618: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b161c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b1620: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b1620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b1624: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x4b1624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x4b1628: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4b1628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4b162c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b162cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b1630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b1634: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x4b1634u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x4b1638: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4b1638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4b163c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1640: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b1640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b1644: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4b1644u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4b1648: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x4b1648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x4b164c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4b164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4b1650: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b1650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b1654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b1658: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x4b1658u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x4b165c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4b165cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4b1660: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1664: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b1664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b1668: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b1668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b166c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B166Cu;
    {
        const bool branch_taken_0x4b166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B166Cu;
        // 0x4b1670: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b166c) {
            ctx->pc = 0x4B1684u;
            goto label_4b1684;
        }
    }
    ctx->pc = 0x4B1674u;
    // 0x4b1674: 0x0  nop
    ctx->pc = 0x4b1674u;
    // NOP
label_4b1678:
    // 0x4b1678: 0x29420030  slti        $v0, $t2, 0x30
    ctx->pc = 0x4b1678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b167c: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x4B167Cu;
    {
        const bool branch_taken_0x4b167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B167Cu;
        // 0x4b1680: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b167c) {
            ctx->pc = 0x4B14E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b14e8;
        }
    }
    ctx->pc = 0x4B1684u;
label_4b1684:
    // 0x4b1684: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B1684u;
    SET_GPR_U32(ctx, 31, 0x4B168Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B1684u, 0x4B168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B168Cu;
label_4b168c:
    // 0x4b168c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b168cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1690: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b1690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b1694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b169c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B169Cu;
        // 0x4b16a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B16A4u;
    // 0x4b16a4: 0x0  nop
    ctx->pc = 0x4b16a4u;
    // NOP
    ctx->pc = 0x4b16a8u;
}
