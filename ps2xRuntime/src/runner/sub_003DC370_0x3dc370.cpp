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

// Function: sub_003DC370
// Address: 0x3dc370 - 0x3dc5b0
void sub_003DC370_0x3dc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC370_0x3dc370");
#endif

    switch (ctx->pc) {
        case 0x3dc508u: goto label_3dc508;
        default: break;
    }

    ctx->pc = 0x3dc370u;

    // 0x3dc370: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3dc370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc374: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3dc374u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc378: 0x8d4316d4  lw          $v1, 0x16D4($t2)
    ctx->pc = 0x3dc378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5844)));
    // 0x3dc37c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3dc37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3dc380: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DC380u;
    {
        const bool branch_taken_0x3dc380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC380u;
        // 0x3dc384: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc380) {
            ctx->pc = 0x3DC3C4u;
            goto label_3dc3c4;
        }
    }
    ctx->pc = 0x3DC388u;
    // 0x3dc388: 0x8d44001c  lw          $a0, 0x1C($t2)
    ctx->pc = 0x3dc388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x3dc38c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc390: 0x914316d0  lbu         $v1, 0x16D0($t2)
    ctx->pc = 0x3dc390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5840)));
    // 0x3dc394: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dc394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc398: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dc398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dc39c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc3a0: 0xad44001c  sw          $a0, 0x1C($t2)
    ctx->pc = 0x3dc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 4));
    // 0x3dc3a4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dc3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc3a8: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc3ac: 0x954216d0  lhu         $v0, 0x16D0($t2)
    ctx->pc = 0x3dc3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 5840)));
    // 0x3dc3b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dc3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dc3b4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3dc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3dc3b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dc3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dc3bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC3BCu;
    {
        const bool branch_taken_0x3dc3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3BCu;
        // 0x3dc3c0: 0xad45001c  sw          $a1, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc3bc) {
            ctx->pc = 0x3DC3E8u;
            goto label_3dc3e8;
        }
    }
    ctx->pc = 0x3DC3C4u;
label_3dc3c4:
    // 0x3dc3c4: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DC3C4u;
    {
        const bool branch_taken_0x3dc3c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3DC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3C4u;
        // 0x3dc3c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc3c4) {
            ctx->pc = 0x3DC3ECu;
            goto label_3dc3ec;
        }
    }
    ctx->pc = 0x3DC3CCu;
    // 0x3dc3cc: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x3dc3d0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc3d4: 0x914416d0  lbu         $a0, 0x16D0($t2)
    ctx->pc = 0x3dc3d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5840)));
    // 0x3dc3d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc3dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3dc3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc3e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc3e4: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
label_3dc3e8:
    // 0x3dc3e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3dc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3dc3ec:
    // 0x3dc3ec: 0xa54016d0  sh          $zero, 0x16D0($t2)
    ctx->pc = 0x3dc3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 5840), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc3f0: 0xad4216cc  sw          $v0, 0x16CC($t2)
    ctx->pc = 0x3dc3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 5836), GPR_U32(ctx, 2));
    // 0x3dc3f4: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3DC3F4u;
    {
        const bool branch_taken_0x3dc3f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3F4u;
        // 0x3dc3f8: 0xad4016d4  sw          $zero, 0x16D4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 5844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc3f4) {
            ctx->pc = 0x3DC45Cu;
            goto label_3dc45c;
        }
    }
    ctx->pc = 0x3DC3FCu;
    // 0x3dc3fc: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x3dc400: 0xb4202  srl         $t0, $t3, 8
    ctx->pc = 0x3dc400u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x3dc404: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc408: 0xb3027  nor         $a2, $zero, $t3
    ctx->pc = 0x3dc408u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x3dc40c: 0x64a02  srl         $t1, $a2, 8
    ctx->pc = 0x3dc40cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x3dc410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc414: 0xa06b0000  sb          $t3, 0x0($v1)
    ctx->pc = 0x3dc414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x3dc418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc41c: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc41cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
    // 0x3dc420: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3dc420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc424: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc428: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x3dc428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3dc42c: 0x24470003  addiu       $a3, $v0, 0x3
    ctx->pc = 0x3dc42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3dc430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc434: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x3dc434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3dc438: 0xad44001c  sw          $a0, 0x1C($t2)
    ctx->pc = 0x3dc438u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 4));
    // 0x3dc43c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc440: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dc440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc444: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x3dc444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3dc448: 0xad45001c  sw          $a1, 0x1C($t2)
    ctx->pc = 0x3dc448u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
    // 0x3dc44c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc450: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dc454: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x3dc454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3dc458: 0xad47001c  sw          $a3, 0x1C($t2)
    ctx->pc = 0x3dc458u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
label_3dc45c:
    // 0x3dc45c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3dc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3dc460: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3dc460u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3dc464: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3dc464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3dc468: 0x11620043  beq         $t3, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3DC468u;
    {
        const bool branch_taken_0x3dc468 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC468u;
        // 0x3dc46c: 0xb1027  nor         $v0, $zero, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc468) {
            ctx->pc = 0x3DC578u;
            goto label_3dc578;
        }
    }
    ctx->pc = 0x3DC470u;
    // 0x3dc470: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3dc470u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x3dc474: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3dc474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3dc478: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x3dc478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x3dc47c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DC47Cu;
    {
        const bool branch_taken_0x3dc47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC47Cu;
        // 0x3dc480: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc47c) {
            ctx->pc = 0x3DC504u;
            goto label_3dc504;
        }
    }
    ctx->pc = 0x3DC484u;
    // 0x3dc484: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3dc484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3dc488: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DC488u;
    {
        const bool branch_taken_0x3dc488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC488u;
        // 0x3dc48c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc488) {
            ctx->pc = 0x3DC4DCu;
            goto label_3dc4dc;
        }
    }
    ctx->pc = 0x3DC490u;
    // 0x3dc490: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DC490u;
    {
        const bool branch_taken_0x3dc490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC490u;
        // 0x3dc494: 0x8d42001c  lw          $v0, 0x1C($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc490) {
            ctx->pc = 0x3DC4BCu;
            goto label_3dc4bc;
        }
    }
    ctx->pc = 0x3DC498u;
    // 0x3dc498: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x3dc498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3dc49c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc4a0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3dc4a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3dc4a4: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x3dc4a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3dc4a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc4ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3dc4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc4b4: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
    // 0x3dc4b8: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_3dc4bc:
    // 0x3dc4bc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3dc4bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3dc4c0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc4c4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3dc4c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dc4c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc4cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3dc4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3dc4d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3dc4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc4d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc4d8: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
label_3dc4dc:
    // 0x3dc4dc: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x3dc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x3dc4e0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3dc4e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3dc4e4: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3dc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc4e8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3dc4e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dc4ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc4f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3dc4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3dc4f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3dc4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc4f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc4fc: 0x1169001e  beq         $t3, $t1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3DC4FCu;
    {
        const bool branch_taken_0x3dc4fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 9));
        ctx->pc = 0x3DC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4FCu;
        // 0x3dc500: 0xad42001c  sw          $v0, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4fc) {
            ctx->pc = 0x3DC578u;
            goto label_3dc578;
        }
    }
    ctx->pc = 0x3DC504u;
label_3dc504:
    // 0x3dc504: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3dc504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dc508:
    // 0x3dc508: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x3dc508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x3dc50c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x3dc50cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x3dc510: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc514: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3dc514u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3dc518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc51c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3dc51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc520: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dc520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dc524: 0xad43001c  sw          $v1, 0x1C($t2)
    ctx->pc = 0x3dc524u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 3));
    // 0x3dc528: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x3dc528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dc52c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc530: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x3dc530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3dc534: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x3dc534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3dc538: 0x24670003  addiu       $a3, $v1, 0x3
    ctx->pc = 0x3dc538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3dc53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc540: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3dc540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc544: 0xad45001c  sw          $a1, 0x1C($t2)
    ctx->pc = 0x3dc544u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
    // 0x3dc548: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc54c: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x3dc54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3dc550: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dc550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dc554: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dc554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dc558: 0xad46001c  sw          $a2, 0x1C($t2)
    ctx->pc = 0x3dc558u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 6));
    // 0x3dc55c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3dc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3dc560: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x3dc560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3dc564: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3dc564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3dc568: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3dc568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3dc56c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dc56cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dc570: 0x1569ffe5  bne         $t3, $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3DC570u;
    {
        const bool branch_taken_0x3dc570 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        ctx->pc = 0x3DC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC570u;
        // 0x3dc574: 0xad47001c  sw          $a3, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc570) {
            ctx->pc = 0x3DC508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc508;
        }
    }
    ctx->pc = 0x3DC578u;
label_3dc578:
    // 0x3dc578: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC580u;
    // 0x3dc580: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3dc584: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC584u;
        // 0x3dc588: 0x24429b88  addiu       $v0, $v0, -0x6478 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC58Cu;
    // 0x3dc58c: 0x0  nop
    ctx->pc = 0x3dc58cu;
    // NOP
    // 0x3dc590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dc590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dc594: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3dc594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3dc598: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3dc598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dc59c: 0x2442b3d8  addiu       $v0, $v0, -0x4C28
    ctx->pc = 0x3dc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947800));
    // 0x3dc5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dc5a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5A8u;
        // 0x3dc5ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC5B0u;
}
