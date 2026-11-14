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

// Function: sub_00434270
// Address: 0x434270 - 0x4343a0
void sub_00434270_0x434270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434270_0x434270");
#endif

    ctx->pc = 0x434270u;

    // 0x434270: 0x8f82ae94  lw          $v0, -0x516C($gp)
    ctx->pc = 0x434270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
    // 0x434274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x434274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x434278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434278u;
    {
        const bool branch_taken_0x434278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434278u;
        // 0x43427c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434278) {
            ctx->pc = 0x434290u;
            goto label_434290;
        }
    }
    ctx->pc = 0x434280u;
    // 0x434280: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x434280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x434284: 0x244a3be8  addiu       $t2, $v0, 0x3BE8
    ctx->pc = 0x434284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 15336));
    // 0x434288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x434288u;
    {
        const bool branch_taken_0x434288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434288u;
        // 0x43428c: 0x246b3bc8  addiu       $t3, $v1, 0x3BC8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 15304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434288) {
            ctx->pc = 0x4342A0u;
            goto label_4342a0;
        }
    }
    ctx->pc = 0x434290u;
label_434290:
    // 0x434290: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x434290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x434294: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x434294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x434298: 0x244a3bf8  addiu       $t2, $v0, 0x3BF8
    ctx->pc = 0x434298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 15352));
    // 0x43429c: 0x246b3bd8  addiu       $t3, $v1, 0x3BD8
    ctx->pc = 0x43429cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 15320));
label_4342a0:
    // 0x4342a0: 0x8f83ae78  lw          $v1, -0x5188($gp)
    ctx->pc = 0x4342a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946424)));
    // 0x4342a4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4342A4u;
    {
        const bool branch_taken_0x4342a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4342A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342A4u;
        // 0x4342a8: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4342a4) {
            ctx->pc = 0x43431Cu;
            goto label_43431c;
        }
    }
    ctx->pc = 0x4342ACu;
    // 0x4342ac: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x4342acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4342b0: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4342b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4342b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4342B4u;
    {
        const bool branch_taken_0x4342b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4342b4) {
            ctx->pc = 0x4342B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4342B4u;
            // 0x4342b8: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4342C8u;
            goto label_4342c8;
        }
    }
    ctx->pc = 0x4342BCu;
    // 0x4342bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4342bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4342c0: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x4342c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x4342c4: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4342c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_4342c8:
    // 0x4342c8: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x4342c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x4342cc: 0x8d270010  lw          $a3, 0x10($t1)
    ctx->pc = 0x4342ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4342d0: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x4342d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x4342d4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4342d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4342d8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x4342d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4342dc: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x4342dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4342e0: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x4342e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4342e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4342e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4342e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4342e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4342ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4342ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4342f0: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x4342f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x4342f4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4342f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4342f8: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4342f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4342fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4342fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x434300: 0x8f84ae78  lw          $a0, -0x5188($gp)
    ctx->pc = 0x434300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946424)));
    // 0x434304: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x434304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x434308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43430c: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x43430cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x434310: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x434310u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x434314: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x434314u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x434318: 0xad2a0058  sw          $t2, 0x58($t1)
    ctx->pc = 0x434318u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 10));
label_43431c:
    // 0x43431c: 0x8f83ae7c  lw          $v1, -0x5184($gp)
    ctx->pc = 0x43431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946428)));
    // 0x434320: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x434320u;
    {
        const bool branch_taken_0x434320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x434324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434320u;
        // 0x434324: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434320) {
            ctx->pc = 0x434398u;
            goto label_434398;
        }
    }
    ctx->pc = 0x434328u;
    // 0x434328: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x434328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43432c: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x43432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x434330: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x434330u;
    {
        const bool branch_taken_0x434330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x434330) {
            ctx->pc = 0x434334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434330u;
            // 0x434334: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434344u;
            goto label_434344;
        }
    }
    ctx->pc = 0x434338u;
    // 0x434338: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x434338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x43433c: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x43433cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x434340: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x434340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_434344:
    // 0x434344: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x434344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x434348: 0x8d270010  lw          $a3, 0x10($t1)
    ctx->pc = 0x434348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x43434c: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x43434cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x434350: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x434350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x434354: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x434354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x434358: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x434358u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x43435c: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x43435cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x434360: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x434360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x434364: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x434364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x434368: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x434368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x43436c: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x43436cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x434370: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x434370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x434374: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x434374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x434378: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x434378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x43437c: 0x8f84ae7c  lw          $a0, -0x5184($gp)
    ctx->pc = 0x43437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946428)));
    // 0x434380: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x434380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x434384: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x434388: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x434388u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x43438c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x43438cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x434390: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x434390u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x434394: 0xad2b0058  sw          $t3, 0x58($t1)
    ctx->pc = 0x434394u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 11));
label_434398:
    // 0x434398: 0x3e00008  jr          $ra
    ctx->pc = 0x434398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4343A0u;
}
