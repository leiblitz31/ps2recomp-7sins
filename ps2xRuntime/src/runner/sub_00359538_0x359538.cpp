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

// Function: sub_00359538
// Address: 0x359538 - 0x359728
void sub_00359538_0x359538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359538_0x359538");
#endif

    ctx->pc = 0x359538u;

    // 0x359538: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x359538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x35953c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x35953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x359540: 0x2442eeb8  addiu       $v0, $v0, -0x1148
    ctx->pc = 0x359540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962872));
    // 0x359544: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x359544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x359548: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x359548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35954c: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x35954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x359550: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x359550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x359554: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x359554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x359558: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x359558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35955c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35955Cu;
    {
        const bool branch_taken_0x35955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35955Cu;
        // 0x359560: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35955c) {
            ctx->pc = 0x359584u;
            goto label_359584;
        }
    }
    ctx->pc = 0x359564u;
    // 0x359564: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359568: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x359568u;
    {
        const bool branch_taken_0x359568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359568) {
            ctx->pc = 0x35956Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359568u;
            // 0x35956c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35957Cu;
            goto label_35957c;
        }
    }
    ctx->pc = 0x359570u;
    // 0x359570: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x359570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x359574: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x359574u;
    {
        const bool branch_taken_0x359574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359574u;
        // 0x359578: 0x24429bd8  addiu       $v0, $v0, -0x6428 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359574) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x35957Cu;
label_35957c:
    // 0x35957c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x35957Cu;
    {
        const bool branch_taken_0x35957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35957Cu;
        // 0x359580: 0x24428c38  addiu       $v0, $v0, -0x73C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35957c) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x359584u;
label_359584:
    // 0x359584: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x359584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x359588: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x359588u;
    {
        const bool branch_taken_0x359588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359588u;
        // 0x35958c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359588) {
            ctx->pc = 0x3595A4u;
            goto label_3595a4;
        }
    }
    ctx->pc = 0x359590u;
    // 0x359590: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359594: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x359594u;
    {
        const bool branch_taken_0x359594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359594u;
        // 0x359598: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359594) {
            ctx->pc = 0x359634u;
            goto label_359634;
        }
    }
    ctx->pc = 0x35959Cu;
    // 0x35959c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x35959Cu;
    {
        const bool branch_taken_0x35959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35959Cu;
        // 0x3595a0: 0x2442a520  addiu       $v0, $v0, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35959c) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x3595A4u;
label_3595a4:
    // 0x3595a4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3595a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3595a8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3595A8u;
    {
        const bool branch_taken_0x3595a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595A8u;
        // 0x3595ac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595a8) {
            ctx->pc = 0x3595F8u;
            goto label_3595f8;
        }
    }
    ctx->pc = 0x3595B0u;
    // 0x3595b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3595B0u;
    {
        const bool branch_taken_0x3595b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595B0u;
        // 0x3595b4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595b0) {
            ctx->pc = 0x3595D8u;
            goto label_3595d8;
        }
    }
    ctx->pc = 0x3595B8u;
    // 0x3595b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3595b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3595bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3595BCu;
    {
        const bool branch_taken_0x3595bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3595bc) {
            ctx->pc = 0x3595C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3595BCu;
            // 0x3595c0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3595D0u;
            goto label_3595d0;
        }
    }
    ctx->pc = 0x3595C4u;
    // 0x3595c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3595c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3595c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3595C8u;
    {
        const bool branch_taken_0x3595c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595C8u;
        // 0x3595cc: 0x24425f40  addiu       $v0, $v0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595c8) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x3595D0u;
label_3595d0:
    // 0x3595d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3595D0u;
    {
        const bool branch_taken_0x3595d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595D0u;
        // 0x3595d4: 0x2442ef98  addiu       $v0, $v0, -0x1068 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595d0) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x3595D8u;
label_3595d8:
    // 0x3595d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3595d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3595dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3595DCu;
    {
        const bool branch_taken_0x3595dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3595dc) {
            ctx->pc = 0x3595E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3595DCu;
            // 0x3595e0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3595F0u;
            goto label_3595f0;
        }
    }
    ctx->pc = 0x3595E4u;
    // 0x3595e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3595e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3595e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3595E8u;
    {
        const bool branch_taken_0x3595e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595E8u;
        // 0x3595ec: 0x24421a50  addiu       $v0, $v0, 0x1A50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595e8) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x3595F0u;
label_3595f0:
    // 0x3595f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3595F0u;
    {
        const bool branch_taken_0x3595f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595F0u;
        // 0x3595f4: 0x2442b590  addiu       $v0, $v0, -0x4A70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595f0) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x3595F8u;
label_3595f8:
    // 0x3595f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3595F8u;
    {
        const bool branch_taken_0x3595f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595F8u;
        // 0x3595fc: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595f8) {
            ctx->pc = 0x359620u;
            goto label_359620;
        }
    }
    ctx->pc = 0x359600u;
    // 0x359600: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359604: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x359604u;
    {
        const bool branch_taken_0x359604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359604) {
            ctx->pc = 0x359608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359604u;
            // 0x359608: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359618u;
            goto label_359618;
        }
    }
    ctx->pc = 0x35960Cu;
    // 0x35960c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x359610: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x359610u;
    {
        const bool branch_taken_0x359610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359610u;
        // 0x359614: 0x24424308  addiu       $v0, $v0, 0x4308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359610) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x359618u;
label_359618:
    // 0x359618: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x359618u;
    {
        const bool branch_taken_0x359618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359618u;
        // 0x35961c: 0x2442d478  addiu       $v0, $v0, -0x2B88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359618) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x359620u;
label_359620:
    // 0x359620: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359624: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359624u;
    {
        const bool branch_taken_0x359624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359624u;
        // 0x359628: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359624) {
            ctx->pc = 0x359634u;
            goto label_359634;
        }
    }
    ctx->pc = 0x35962Cu;
    // 0x35962c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35962Cu;
    {
        const bool branch_taken_0x35962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35962Cu;
        // 0x359630: 0x2442a520  addiu       $v0, $v0, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35962c) {
            ctx->pc = 0x35963Cu;
            goto label_35963c;
        }
    }
    ctx->pc = 0x359634u;
label_359634:
    // 0x359634: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x359634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x359638: 0x24429728  addiu       $v0, $v0, -0x68D8
    ctx->pc = 0x359638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940456));
label_35963c:
    // 0x35963c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x35963cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x359640: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x359640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x359644: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x359644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x359648: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359648u;
    {
        const bool branch_taken_0x359648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359648u;
        // 0x35964c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359648) {
            ctx->pc = 0x35965Cu;
            goto label_35965c;
        }
    }
    ctx->pc = 0x359650u;
    // 0x359650: 0x2442ba28  addiu       $v0, $v0, -0x45D8
    ctx->pc = 0x359650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949416));
    // 0x359654: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x359654u;
    {
        const bool branch_taken_0x359654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359654u;
        // 0x359658: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359654) {
            ctx->pc = 0x3596B0u;
            goto label_3596b0;
        }
    }
    ctx->pc = 0x35965Cu;
label_35965c:
    // 0x35965c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x35965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x359660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359660u;
    {
        const bool branch_taken_0x359660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359660u;
        // 0x359664: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359660) {
            ctx->pc = 0x359674u;
            goto label_359674;
        }
    }
    ctx->pc = 0x359668u;
    // 0x359668: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x359668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x35966c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35966Cu;
    {
        const bool branch_taken_0x35966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35966Cu;
        // 0x359670: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35966c) {
            ctx->pc = 0x3596B0u;
            goto label_3596b0;
        }
    }
    ctx->pc = 0x359674u;
label_359674:
    // 0x359674: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x359674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x359678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35967c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35967Cu;
    {
        const bool branch_taken_0x35967c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35967Cu;
        // 0x359680: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35967c) {
            ctx->pc = 0x359690u;
            goto label_359690;
        }
    }
    ctx->pc = 0x359684u;
    // 0x359684: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x359684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x359688: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x359688u;
    {
        const bool branch_taken_0x359688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359688u;
        // 0x35968c: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359688) {
            ctx->pc = 0x3596B0u;
            goto label_3596b0;
        }
    }
    ctx->pc = 0x359690u;
label_359690:
    // 0x359690: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x359690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x359694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359698: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359698u;
    {
        const bool branch_taken_0x359698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359698u;
        // 0x35969c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359698) {
            ctx->pc = 0x3596ACu;
            goto label_3596ac;
        }
    }
    ctx->pc = 0x3596A0u;
    // 0x3596a0: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x3596a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x3596a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3596A4u;
    {
        const bool branch_taken_0x3596a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596A4u;
        // 0x3596a8: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596a4) {
            ctx->pc = 0x3596B0u;
            goto label_3596b0;
        }
    }
    ctx->pc = 0x3596ACu;
label_3596ac:
    // 0x3596ac: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3596acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_3596b0:
    // 0x3596b0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3596b4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3596b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3596b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3596B8u;
    {
        const bool branch_taken_0x3596b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596B8u;
        // 0x3596bc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596b8) {
            ctx->pc = 0x3596C8u;
            goto label_3596c8;
        }
    }
    ctx->pc = 0x3596C0u;
    // 0x3596c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3596C0u;
    {
        const bool branch_taken_0x3596c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596C0u;
        // 0x3596c4: 0x2442abb8  addiu       $v0, $v0, -0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596c0) {
            ctx->pc = 0x3596FCu;
            goto label_3596fc;
        }
    }
    ctx->pc = 0x3596C8u;
label_3596c8:
    // 0x3596c8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x3596c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3596cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3596CCu;
    {
        const bool branch_taken_0x3596cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596CCu;
        // 0x3596d0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596cc) {
            ctx->pc = 0x3596DCu;
            goto label_3596dc;
        }
    }
    ctx->pc = 0x3596D4u;
    // 0x3596d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3596D4u;
    {
        const bool branch_taken_0x3596d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596D4u;
        // 0x3596d8: 0x2442c458  addiu       $v0, $v0, -0x3BA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596d4) {
            ctx->pc = 0x3596FCu;
            goto label_3596fc;
        }
    }
    ctx->pc = 0x3596DCu;
label_3596dc:
    // 0x3596dc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3596dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3596e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3596e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3596e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3596E4u;
    {
        const bool branch_taken_0x3596e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596E4u;
        // 0x3596e8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596e4) {
            ctx->pc = 0x3596F4u;
            goto label_3596f4;
        }
    }
    ctx->pc = 0x3596ECu;
    // 0x3596ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3596ECu;
    {
        const bool branch_taken_0x3596ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596ECu;
        // 0x3596f0: 0x2442c628  addiu       $v0, $v0, -0x39D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596ec) {
            ctx->pc = 0x3596FCu;
            goto label_3596fc;
        }
    }
    ctx->pc = 0x3596F4u;
label_3596f4:
    // 0x3596f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x3596f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x3596f8: 0x2442c7f0  addiu       $v0, $v0, -0x3810
    ctx->pc = 0x3596f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
label_3596fc:
    // 0x3596fc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x3596fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x359700: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x359700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x359704: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x359704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x359708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359708u;
    {
        const bool branch_taken_0x359708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359708u;
        // 0x35970c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359708) {
            ctx->pc = 0x359718u;
            goto label_359718;
        }
    }
    ctx->pc = 0x359710u;
    // 0x359710: 0x2442ce38  addiu       $v0, $v0, -0x31C8
    ctx->pc = 0x359710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954552));
    // 0x359714: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x359714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_359718:
    // 0x359718: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x359718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x35971c: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x35971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x359720: 0x3e00008  jr          $ra
    ctx->pc = 0x359720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359720u;
        // 0x359724: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359728u;
}
