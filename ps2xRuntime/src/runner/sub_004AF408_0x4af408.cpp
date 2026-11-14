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

// Function: sub_004AF408
// Address: 0x4af408 - 0x4af590
void sub_004AF408_0x4af408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF408_0x4af408");
#endif

    switch (ctx->pc) {
        case 0x4af474u: goto label_4af474;
        case 0x4af4a8u: goto label_4af4a8;
        case 0x4af4e0u: goto label_4af4e0;
        case 0x4af50cu: goto label_4af50c;
        case 0x4af544u: goto label_4af544;
        case 0x4af568u: goto label_4af568;
        default: break;
    }

    ctx->pc = 0x4af408u;

    // 0x4af408: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4af408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4af40c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x4af40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x4af410: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4af410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4af414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4af414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af418: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4af418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4af41c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4af41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4af420: 0x26221f80  addiu       $v0, $s1, 0x1F80
    ctx->pc = 0x4af420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8064));
    // 0x4af424: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4af424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4af428: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x4af428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x4af42c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4af42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4af430: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x4af430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4af434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4af434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4af438: 0x8e030e98  lw          $v1, 0xE98($s0)
    ctx->pc = 0x4af438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3736)));
    // 0x4af43c: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x4af43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x4af440: 0x1443004b  bne         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x4AF440u;
    {
        const bool branch_taken_0x4af440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF440u;
        // 0x4af444: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af440) {
            ctx->pc = 0x4AF570u;
            goto label_4af570;
        }
    }
    ctx->pc = 0x4AF448u;
    // 0x4af448: 0x26221f40  addiu       $v0, $s1, 0x1F40
    ctx->pc = 0x4af448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8000));
    // 0x4af44c: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x4af44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x4af450: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4af450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4af454: 0x26321080  addiu       $s2, $s1, 0x1080
    ctx->pc = 0x4af454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4224));
    // 0x4af458: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x4af458u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af45c: 0x26250f40  addiu       $a1, $s1, 0xF40
    ctx->pc = 0x4af45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
    // 0x4af460: 0x26330f00  addiu       $s3, $s1, 0xF00
    ctx->pc = 0x4af460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
    // 0x4af464: 0x26341f3f  addiu       $s4, $s1, 0x1F3F
    ctx->pc = 0x4af464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 7999));
    // 0x4af468: 0xfe030ec0  sd          $v1, 0xEC0($s0)
    ctx->pc = 0x4af468u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 3776), GPR_U64(ctx, 3));
    // 0x4af46c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4af470: 0xae030ec8  sw          $v1, 0xEC8($s0)
    ctx->pc = 0x4af470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3784), GPR_U32(ctx, 3));
label_4af474:
    // 0x4af474: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x4af474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4af478: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x4af478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4af47c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4af47cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4af480: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x4af480u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x4af484: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4af484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4af488: 0x1486fffa  bne         $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AF488u;
    {
        const bool branch_taken_0x4af488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4AF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF488u;
        // 0x4af48c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af488) {
            ctx->pc = 0x4AF474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af474;
        }
    }
    ctx->pc = 0x4AF490u;
    // 0x4af490: 0x8e030fc4  lw          $v1, 0xFC4($s0)
    ctx->pc = 0x4af490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4036)));
    // 0x4af494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4af494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4af498: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AF498u;
    {
        const bool branch_taken_0x4af498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF498u;
        // 0x4af49c: 0x26030298  addiu       $v1, $s0, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af498) {
            ctx->pc = 0x4AF4D8u;
            goto label_4af4d8;
        }
    }
    ctx->pc = 0x4AF4A0u;
    // 0x4af4a0: 0x260212d8  addiu       $v0, $s0, 0x12D8
    ctx->pc = 0x4af4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4824));
    // 0x4af4a4: 0x26041ed8  addiu       $a0, $s0, 0x1ED8
    ctx->pc = 0x4af4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7896));
label_4af4a8:
    // 0x4af4a8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4af4a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af4ac: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x4af4acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4af4b0: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x4af4b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4af4b4: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x4af4b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4af4b8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x4af4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x4af4bc: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x4af4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x4af4c0: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x4af4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x4af4c4: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x4af4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x4af4c8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4af4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4af4cc: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4AF4CCu;
    {
        const bool branch_taken_0x4af4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF4CCu;
        // 0x4af4d0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af4cc) {
            ctx->pc = 0x4AF4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af4a8;
        }
    }
    ctx->pc = 0x4AF4D4u;
    // 0x4af4d4: 0xae001008  sw          $zero, 0x1008($s0)
    ctx->pc = 0x4af4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4104), GPR_U32(ctx, 0));
label_4af4d8:
    // 0x4af4d8: 0xc127dfc  jal         func_49F7F0
    ctx->pc = 0x4AF4D8u;
    SET_GPR_U32(ctx, 31, 0x4AF4E0u);
    ctx->pc = 0x49F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F7F0u, 0x4AF4D8u, 0x4AF4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF4E0u;
label_4af4e0:
    // 0x4af4e0: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x4af4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x4af4e4: 0xae020e98  sw          $v0, 0xE98($s0)
    ctx->pc = 0x4af4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3736), GPR_U32(ctx, 2));
    // 0x4af4e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4af4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x4af4ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF4ECu;
    {
        const bool branch_taken_0x4af4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af4ec) {
            ctx->pc = 0x4AF4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF4ECu;
            // 0x4af4f0: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF508u;
            goto label_4af508;
        }
    }
    ctx->pc = 0x4AF4F4u;
    // 0x4af4f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4af4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4af4f8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x4af4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x4af4fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4af4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af500: 0xae021008  sw          $v0, 0x1008($s0)
    ctx->pc = 0x4af500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4104), GPR_U32(ctx, 2));
    // 0x4af504: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4af504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4af508:
    // 0x4af508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af50c:
    // 0x4af50c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x4af50cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af510: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x4af510u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4af514: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x4af514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x4af518: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x4af518u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x4af51c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4af51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4af520: 0x1453fffa  bne         $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AF520u;
    {
        const bool branch_taken_0x4af520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x4AF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF520u;
        // 0x4af524: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af520) {
            ctx->pc = 0x4AF50Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af50c;
        }
    }
    ctx->pc = 0x4AF528u;
    // 0x4af528: 0x8e0212c0  lw          $v0, 0x12C0($s0)
    ctx->pc = 0x4af528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4800)));
    // 0x4af52c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4af52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af530: 0x8e031008  lw          $v1, 0x1008($s0)
    ctx->pc = 0x4af530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4104)));
    // 0x4af534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4af534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4af538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4af53c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4AF53Cu;
    SET_GPR_U32(ctx, 31, 0x4AF544u);
    ctx->pc = 0x4AF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF53Cu;
    // 0x4af540: 0xae0212c0  sw          $v0, 0x12C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4AF53Cu, 0x4AF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF544u;
label_4af544:
    // 0x4af544: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x4af544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x4af548: 0x24030ec0  addiu       $v1, $zero, 0xEC0
    ctx->pc = 0x4af548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3776));
    // 0x4af54c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4af54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af550: 0x8e021000  lw          $v0, 0x1000($s0)
    ctx->pc = 0x4af550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
    // 0x4af554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4af554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af558: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4af558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4af55c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4af55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4af560: 0xc0bf7c8  jal         func_2FDF20
    ctx->pc = 0x4AF560u;
    SET_GPR_U32(ctx, 31, 0x4AF568u);
    ctx->pc = 0x4AF564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF560u;
    // 0x4af564: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF20u, 0x4AF560u, 0x4AF568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF568u;
label_4af568:
    // 0x4af568: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x4af568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x4af56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4af56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af570:
    // 0x4af570: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4af570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4af574: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4af574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4af578: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4af578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af57c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4af57cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af580: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4af580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4af584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af588: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF588u;
        // 0x4af58c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF590u;
}
