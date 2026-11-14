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

// Function: sub_00460440
// Address: 0x460440 - 0x460630
void sub_00460440_0x460440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460440_0x460440");
#endif

    switch (ctx->pc) {
        case 0x460550u: goto label_460550;
        case 0x460588u: goto label_460588;
        case 0x4605c0u: goto label_4605c0;
        case 0x4605f8u: goto label_4605f8;
        default: break;
    }

    ctx->pc = 0x460440u;

    // 0x460440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x460440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x460444: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x460444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x460448: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x460448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x46044c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x460450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x460454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x460458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46045c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460460: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x460460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x460464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460468: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x460468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x46046c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460470: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x460470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x460474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460478: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x460478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x46047c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460480: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x460480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x460484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460488: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x460488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x46048c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460490: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x460490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x460494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460498: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x460498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x46049c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4604a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4604a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4604a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4604a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4604a8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x4604a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x4604ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4604acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4604b0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4604b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4604b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4604b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4604b8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x4604b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x4604bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4604c0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4604c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4604c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4604c8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x4604c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x4604cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4604ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4604d0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4604d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4604d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4604d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4604d8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x4604d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x4604dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4604dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4604e0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x4604e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x4604e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4604e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4604e8: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x4604e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x4604ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4604ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4604f0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x4604f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4604f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4604f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4604f8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x4604f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x4604fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4604fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460500: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x460500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x460504: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460508: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x460508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x46050c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460510: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x460510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x460514: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460518: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x460518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x46051c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460520: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x460520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x460524: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460528: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x460528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x46052c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460530: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x460530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x460534: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460538: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x460538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x46053c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460540: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460544: 0x2466003c  addiu       $a2, $v1, 0x3C
    ctx->pc = 0x460544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x460548: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x460548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x46054c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x46054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_460550:
    // 0x460550: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x460550u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x460554: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x460554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x460558: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x460558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x46055c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x46055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x460560: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x460560u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x460564: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x460564u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x460568: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x460568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x46056c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x46056Cu;
    {
        const bool branch_taken_0x46056c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x46056c) {
            ctx->pc = 0x460550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460550;
        }
    }
    ctx->pc = 0x460574u;
    // 0x460574: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x460574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460578: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46057c: 0x2466005c  addiu       $a2, $v1, 0x5C
    ctx->pc = 0x46057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x460580: 0x2445005c  addiu       $a1, $v0, 0x5C
    ctx->pc = 0x460580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x460584: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x460584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_460588:
    // 0x460588: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x460588u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x46058c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x46058cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x460590: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x460590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x460594: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x460594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x460598: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x460598u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x46059c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x46059cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4605a0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4605a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4605a4: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4605A4u;
    {
        const bool branch_taken_0x4605a4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x4605a4) {
            ctx->pc = 0x460588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460588;
        }
    }
    ctx->pc = 0x4605ACu;
    // 0x4605ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4605acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4605b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4605b4: 0x2466007c  addiu       $a2, $v1, 0x7C
    ctx->pc = 0x4605b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x4605b8: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x4605b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x4605bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4605bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4605c0:
    // 0x4605c0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4605c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4605c4: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x4605c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x4605c8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4605c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4605cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4605ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4605d0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4605d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4605d4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x4605d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4605d8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4605d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4605dc: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4605DCu;
    {
        const bool branch_taken_0x4605dc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x4605dc) {
            ctx->pc = 0x4605C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4605c0;
        }
    }
    ctx->pc = 0x4605E4u;
    // 0x4605e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4605e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4605e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4605e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4605ec: 0x2466009c  addiu       $a2, $v1, 0x9C
    ctx->pc = 0x4605ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x4605f0: 0x2445009c  addiu       $a1, $v0, 0x9C
    ctx->pc = 0x4605f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x4605f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4605f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4605f8:
    // 0x4605f8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4605f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4605fc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x4605fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x460600: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x460600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x460604: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x460604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x460608: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x460608u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x46060c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x46060cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x460610: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x460610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x460614: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x460614u;
    {
        const bool branch_taken_0x460614 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x460614) {
            ctx->pc = 0x4605F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4605f8;
        }
    }
    ctx->pc = 0x46061Cu;
    // 0x46061c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460620: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x460620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x460624: 0x3e00008  jr          $ra
    ctx->pc = 0x460624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46062Cu;
    // 0x46062c: 0x0  nop
    ctx->pc = 0x46062cu;
    // NOP
    ctx->pc = 0x460630u;
}
